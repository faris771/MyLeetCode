class Solution {
public:
    
    bool bfs( vector<vector<int>>& adj, int src, int destination,vector<bool>&visited){
        queue<int> q;
        q.push(src);
        
        while(!q.empty()){
            int front = q.front();
            q.pop();          
            if(front == destination)
                return true;
            
            if(!visited[front]){
                
                visited[front] = 1;
                for(int iter : adj[front]){
                    
                    q.push(iter);
                    
                }
                
                
                
            }
            
            
            
        }
        
        return false;
    }
    
    
    bool validPath(int n, vector<vector<int>>& edges, int src, int destination) {
        
        vector<vector<int>> adj(n);
        
        for(int i =0;i<edges.size(); i++){
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }

        vector<bool> visited(n,false);
        
        return bfs(adj,src,destination,visited);
        
    }
};