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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        if(l1 == NULL && l2 == NULL){
            return NULL;
        }
        
        if(l1 == NULL){
            return l2;
        }
        
        if(l2 == NULL){
            return l1;
        }
        
        
        ListNode* p1 = l1;
        ListNode* p2 = l2;
        ListNode* head; 
        
        // get head
        if(l1->val <= l2->val){
            head = new ListNode(l1->val);
            p1 = p1->next;
        } else {
            head = new ListNode(l2->val);
            p2 = p2->next;
        }
        ListNode* ptr = head;
        
        while(!(p1 == NULL && p2 == NULL)){
            
            if(p1 == NULL){
                while(p2 != NULL){
                    ListNode* next = new ListNode(p2->val);
                    ptr->next = next;
                    ptr = ptr->next;
                    p2 = p2->next;
                }
                break;
            }
            
            if(p2 == NULL){
                while(p1 != NULL){
                    ListNode* next = new ListNode(p1->val);
                    ptr->next = next;
                    ptr = ptr->next;
                    p1 = p1->next;
                }
                break; 
            }
            
            // both are not NULL
            if(p1->val <= p2->val){
                ListNode* next = new ListNode(p1->val);
                ptr->next = next;
                ptr = ptr->next;
                p1 = p1->next;
            } else {
                ListNode* next = new ListNode(p2->val);
                ptr->next = next;
                ptr = ptr->next;
                p2 = p2->next;
            }
        }
        
        return head;
    }
};