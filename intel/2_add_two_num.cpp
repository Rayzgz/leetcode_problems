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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = new ListNode(0);
        ListNode* cur = head;
        int carry = 0;
        while(l1 || l2){
            int val1 = l1 == NULL ? 0 : l1->val;
            int val2 = l2 == NULL ? 0 : l2->val;
            int sum = carry + val1 + val2;
            carry = sum >= 10 ? 1 : 0;
            ListNode* node = new ListNode(sum % 10);
            cur->next = node;
            cur = cur->next;
            l1 = l1 == NULL ? l1 : l1->next;
            l2 = l2 == NULL ? l2 : l2->next;
        }
        if(carry == 1){
            ListNode* node = new ListNode(1);
            cur->next = node;
        }
        return head->next;
    }
};