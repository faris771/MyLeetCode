class Solution:
    def allPathsSourceTarget(self, graph: List[List[int]]) -> List[List[int]]:
        ans = []        
        def dfs(tmpPath,src,end):
            if src == end:
                ans.append(tmpPath)
            for nxt in graph[src]:
                dfs(tmpPath +[nxt],nxt,end)
            
        dfs([0],0,len(graph) - 1)
        return ans
