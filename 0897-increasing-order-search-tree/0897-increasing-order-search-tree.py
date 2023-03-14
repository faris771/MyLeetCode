# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def increasingBST(self, root: TreeNode) -> TreeNode:
        
        sortedNodes = []
        
        def dfs(root):
            if not root:
                return None
            
            dfs(root.left)
            
            sortedNodes.append(root)
            
            dfs(root.right)
            
        dfs(root)
        
        resTree = TreeNode()
        tmpTree = resTree
        
        
        for i in range(len(sortedNodes ) -1 ):
            sortedNodes[i].left = None
            sortedNodes[i].right = sortedNodes[i+1]
            
        sortedNodes[len(sortedNodes)-1].left = None
        sortedNodes[len(sortedNodes)-1].right = None
        
        return sortedNodes[0]
            
        return resTree.right
        