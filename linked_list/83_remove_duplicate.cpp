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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* cur = head;
        while(cur != NULL && cur->next != NULL){
            if(cur->next->val == cur->val){
                ListNode* del = cur->next;
                cur->next = cur->next->next;
                delete del;
            } else {
                cur = cur->next;
            }
        }
        
        return head;
    }
};