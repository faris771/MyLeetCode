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
    ListNode* middleNode(ListNode* head) {
        
        int size = 0;
        ListNode *iter = head;
        
        
        while(iter!= nullptr){
            size++;
            
            iter = iter -> next;
        }
        
        iter = head;
        
        int cnt = 0;
        while(iter!= nullptr){
            if(cnt == size/2){
                return iter;
                
            }
            cnt++;
            
            iter = iter -> next;
        }
        
        
        return nullptr;
    }
};