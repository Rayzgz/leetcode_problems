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
    ListNode* cur;
    bool check(ListNode* node){
        if(node == NULL){
            return true;
        }
        bool pal = check(node->next) && (cur->val == node->val);
        cur = cur->next;
        if(cur == node){
            return true;
        }
        return pal;
    }
    
    bool isPalindrome(ListNode* head) {
        if(head == NULL){
            return true;
        }
        cur = head;
        return check(head);
    }
};