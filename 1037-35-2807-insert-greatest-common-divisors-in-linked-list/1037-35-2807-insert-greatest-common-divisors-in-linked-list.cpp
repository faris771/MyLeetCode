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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        
        ListNode* iter = nullptr;
        iter = head;
        
        
        int midVal = -1;
        
        while(iter->next){
            
                                       
            cout << iter->val << endl;
            
            midVal = gcd(iter->val, iter->next->val);
            
            ListNode* midNode = new ListNode();
            
            midNode->val =  midVal;
            
            midNode ->next = iter->next;
            
            iter->next = midNode;
            
            
            iter = iter->next->next;
        }
        
        return head;
    }
};