class Solution:
    def allPathsSourceTarget(self, graph: List[List[int]]) -> List[List[int]]:
        ans = []
        tmpPath = []
        
        def dfs(src,end):
            tmpPath.append(src)
            if src == end:
                ans.append(tmpPath.copy())  # append a copy of tmpPath
            
            for nxt in graph[src]:
                dfs(nxt,end)
            
            tmpPath.pop()
            
        dfs(0,len(graph) - 1)
        return ans
