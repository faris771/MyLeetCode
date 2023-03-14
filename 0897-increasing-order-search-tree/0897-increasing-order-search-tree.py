# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def increasingBST(self, root: TreeNode) -> TreeNode:
        
        answerTree = TreeNode()
        currentNode = answerTree
        
        
        
        def dfs(root):
            if not root:
                return None
            
            dfs(root.left)
            nonlocal currentNode
            root.left= None
            currentNode.right = root
            currentNode = currentNode.right
            
            dfs(root.right)
            
        dfs(root)
        return answerTree.right
        