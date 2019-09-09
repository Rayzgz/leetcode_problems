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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        set<ListNode*> visited;
        ListNode* ptrA = headA;
        ListNode* ptrB = headB;
        while(ptrA != NULL){
            visited.insert(ptrA);
            ptrA = ptrA->next;
        }
        
        while(ptrB != NULL){
            if(visited.find(ptrB) != visited.end()){
                return ptrB;
            } else {
                ptrB = ptrB->next;
            }
        }
        
        return NULL;
    }
};