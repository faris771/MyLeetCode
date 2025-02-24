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
    int maxDepth(TreeNode* root) {


        if(!root)
            return 0;
        
        queue<TreeNode*> q;
        
        q.push(root);

        int ans = 0;
        while(!q.empty()){
            int currentQueueSize = q.size();

            for(int i = 0; i< currentQueueSize;i++){
                TreeNode* frontNode = q.front();
                q.pop();

                if(frontNode->left){
                    q.push(frontNode->left);

                }
                if(frontNode->right){
                    q.push(frontNode->right);

                }

            }
            ans++;


        }

        return ans;
    }
};