/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    
    TreeNode* dfs(TreeNode* clone,TreeNode* target){
        
        if(!clone)
            return nullptr;
        
        if(clone->val == target->val)
            return clone;
        
        TreeNode* left = dfs(clone->left, target);
        TreeNode* right = dfs(clone->right, target) ;
        
        
        return left!=nullptr? left : right;
    
    }
    
    
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        
        return dfs(cloned,target);    
        
    
    
    }
};