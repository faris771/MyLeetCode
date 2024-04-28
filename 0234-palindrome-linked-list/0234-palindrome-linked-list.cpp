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
    
    
    int getListSize(ListNode* head ){
        int size = 0;
        for(ListNode* iter = head; iter!=NULL; iter = iter->next){
            
            size++;
            
            
        }
        
        return size;
        
    }
    bool calc(ListNode* prev, ListNode* current, ListNode* mid){
        
        bool tmp = 1;
        if(current->next != mid){
            tmp = calc(current , current->next,mid);
        }
        
        if(current->val == current->next->val && tmp == 1){
            
            if (prev!= NULL){
                prev->next = current->next->next;
            }
            return 1;
        }
        
        return 0;
    }
    
    
    bool isPalindrome(ListNode* head) {
      
        
        // find middle node 
        ListNode* slow = head, *fast = head;
        
        while (fast &&fast->next){
            
            fast= fast->next->next;
            slow  = slow ->next;
            
        }
        
        
        // reverse right hand side 
                
        
        
        ListNode* tmp = nullptr;
        ListNode* prev = nullptr;
        
        
        
        while  (slow){
            
            tmp = slow -> next;
            slow-> next = prev;
            prev = slow;
            slow = tmp;
            
        }
            // check if palindrome 
            
            
            ListNode* rightPtr =  prev;
            ListNode* leftPtr =  head;
            
            
            
            while (rightPtr){
                if(leftPtr->val != rightPtr->val)
                    return 0;
                
                leftPtr = leftPtr->next;
                rightPtr = rightPtr->next;
                
                
                
            }
            
            

            return 1;
            
        }
        
            
    
};