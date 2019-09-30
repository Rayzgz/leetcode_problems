/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        // base case: last node
        if(head == NULL || head->next == NULL){
            return head;
        }
        
        // get the head recursively
        ListNode* ptr = reverseList(head->next);      
        
        // reverse the next node
        head->next->next = head;
        head->next = NULL;
        return ptr;
    }
};