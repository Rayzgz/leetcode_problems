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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* cur = head;
        ListNode* prev = head;
        while(cur != NULL){
            if(cur->val == val){
                if(cur == head){
                    ListNode* del = cur;
                    head = head->next;
                    cur = head;
                    prev = head;
                    delete del;
                } else {
                    ListNode* del = cur;
                    prev->next = cur->next;
                    cur = prev->next;
                    delete del;
                }
                continue;
            }
            prev = cur;
            cur = cur->next;
        }
        
        return head;
    }
};