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
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(!l1 && !l2){
            
            return nullptr;
        }
        if(!l1)
            return l2;
        if(!l2)
            return l1;
        
        ListNode * head = nullptr;
        
        if(l1->val <= l2->val){
            head = l1;
            l1 = l1->next;
        }
        else{
            head = l2;
            l2 = l2->next;
        }
        
        ListNode *iter = head;
        
        
        while(l1 && l2){
         
            if(l1->val <= l2->val){
                iter->next = l1;
                l1 = l1->next;
            }
            else{
                iter->next = l2;
                l2 = l2->next;
            } 
            iter = iter->next;
        }
        
        if(l1)
            iter->next = l1;
        else
            iter->next = l2;
        
        
        
        return head;
    }
};