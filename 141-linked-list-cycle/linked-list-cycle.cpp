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
    bool hasCycle(ListNode *head) {


        ListNode* slow = head;
        ListNode* fast = head;
        
        if(!head)
            return 0;

        while(fast && fast->next ){
                         
            fast=fast->next->next;
            slow = slow->next;

             if(fast == slow){
                cout << "EQ: " <<fast->val  << " " << slow->val <<endl;
                
                return 1;

            }

        }

        return 0;
        
    }
};