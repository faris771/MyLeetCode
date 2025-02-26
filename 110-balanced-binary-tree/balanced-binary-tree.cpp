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
    bool isBalanced(TreeNode* root) {
        
        if(!root)
            return 1;
        
        int leftDepth = maxDepth(root->left);
        int rightDepth = maxDepth(root->right);
        

        return isBalanced(root->left) && isBalanced(root->right) && \
            (abs(leftDepth - rightDepth) <=1);

    }

    int maxDepth(TreeNode*root){
        if(!root)
            return 0;

        return 1 + max(maxDepth(root->left), maxDepth(root->right));



    }
};