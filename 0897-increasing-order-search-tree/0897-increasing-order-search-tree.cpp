/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    TreeNode* newRoot = new TreeNode;
    TreeNode* iter = newRoot;
    
    TreeNode* increasingBST(TreeNode* root) {
        
        if (!root)
            return nullptr;
        
        
        increasingBST(root->left);
        iter->right = new TreeNode(root->val);
        
        iter = iter->right;
        
        increasingBST(root->right);
        
        
        
        return newRoot->right;
        
        
        
        
    }
};