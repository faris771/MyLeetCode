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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {


        ListNode* merged = new ListNode();
        ListNode* iter = nullptr;
        
        iter = merged;

        while(list1 && list2){

            if(list1->val <= list2->val){

                iter->next = list1;
                list1= list1->next;
            
            }else{
                iter->next = list2;
                list2= list2->next;
            }

            iter = iter->next;
        }

        if(list1){
            iter->next = list1;
        
        }else{
            iter->next = list2;        
        }
        
        return merged->next;
    }
};