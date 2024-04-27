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
        ListNode* midOfList = head;
        int listSize = getListSize(head);
        
        if(listSize == 1)
            return 1;
        
        ListNode* pre = NULL;
        for(int i =0;i< listSize/2; i++){
            pre = midOfList;
            midOfList = midOfList->next;
        }
        
        
        
      
        
        if (listSize%2 == 1){
            
            pre->next =midOfList->next;
            midOfList = midOfList->next;
            
        }
        
        return calc(NULL,head, midOfList);
        
        return 1;
        
    }
};