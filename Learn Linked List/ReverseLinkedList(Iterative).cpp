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
 //Iterative Approach
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        ListNode* temp;
        if(!curr or curr -> next == nullptr) return head;
        // curr = curr -> next;
        while(curr){
            if(curr -> next != nullptr){
                temp = curr -> next;
                curr -> next = prev;
            }
            else{
                curr -> next = prev;
                return curr;
            }
            prev = curr;
            curr = temp;
        }
        return curr;
    }
};
