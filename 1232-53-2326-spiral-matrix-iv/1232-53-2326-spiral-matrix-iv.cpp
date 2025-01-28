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
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        
        vector<vector<int>> adj(m, vector<int> (n, -1));
        
        
        ListNode* iter = head;
        
        int currentNodeVal= 0;
        
        
        if(!iter) return adj;
        
        int left =  0;
        int right = n;
        
        
        int top = 0;
        int bot = m;
        
        
        
        
        while(iter){
        
            // left to right
            for (int i = left; i < right; i++){
                if(!iter) return adj;
                
                adj[top][i] = iter->val;
                
                iter = iter->next;
                //
            }
            top++;
            
            // top to bottom
            for (int i = top; i < bot; i++){
                if(!iter) return adj;
                
                adj[i][right-1] = iter->val;
                
                iter = iter->next;
                //
            }
            right--;
            
            // right to left
            for (int i = right-1; i >= left; i--){
                if(!iter) return adj;
                
                adj[bot-1][i] = iter->val;
                
                iter = iter->next;
                //
            }
            bot--;
            
            // bot to top
            for (int i = bot - 1; i >= top; i--){
                if(!iter) return adj;
                
                adj[i][left] = iter->val;
                
                iter = iter->next;
                //
            }
            left++;
            
            
            
            

        }
        return adj;
    }
};