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
    
     int getListLen(ListNode* head){
        
        int len  =0;
        
        ListNode* iter = head;
        
        while(iter){
            
            len++;
            
            iter = iter->next;
        }
        
        return len;
        
        
    }
    
    ListNode* deleteMiddle(ListNode* head) {
        
         
        int len = getListLen(head);
        int mid = len / 2;
        
        int cnt =  0;
        
        
        
        ListNode * iter = head;
        
        ListNode* toBeDeletedNode  = NULL;
        
        if (len == 0 || len == 1)
            return NULL;
        
        
        
        while (1){

            if(cnt+1  == mid ){
                
                toBeDeletedNode = iter->next;
                iter -> next  = iter  -> next -> next;
                break;
            }
                        
            cnt++;
            iter  = iter -> next;
            
        }
        
        delete toBeDeletedNode;
       
        
        return head;
    }
};