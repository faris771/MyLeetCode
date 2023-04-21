class Solution:
    def validPath(self, n: int, edges: List[List[int]], source: int, destination: int) -> bool:
        adj = collections.defaultdict(list)
        
        for a,b in edges:
            adj[a].append(b)
            adj[b].append(a) 
        
        visited = [False] * n
        
        def dfs(src):
            if src == destination:
                return True
            if visited[src]:
                return False
            visited[src] = True
            
            for i in adj[src]:
                if dfs(i):
                    return True
            return False
        
        
        return dfs(source)
        