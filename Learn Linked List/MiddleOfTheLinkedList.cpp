/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
 //Fast and Slow Pointer Approach
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast){
            if(fast -> next == nullptr){
                return slow;
            }
            else if(fast -> next -> next == nullptr){
                return slow -> next;
            }
            fast = fast -> next -> next;
            slow = slow-> next;
        }
        return head;
    }
};
