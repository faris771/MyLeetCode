"""
# Definition for a Node.
class Node:
    def __init__(self, val=None, children=None):
        self.val = val
        self.children = children
"""

class Solution:
    def postorder(self, root: 'Node') -> List[int]:
        
        if not root:
            return None
        
        tmp  =root.val
        ans = []
        
        def dfs(root):
            if not root:
                return
            for c in root.children:
                dfs(c)
                ans.append(c.val)
        
        dfs(root)
        ans.append(tmp)
        return ans
        
        