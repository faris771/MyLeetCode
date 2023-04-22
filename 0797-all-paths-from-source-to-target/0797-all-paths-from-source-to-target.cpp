class Solution {

    vector<vector<int>> ans;

public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<int> tmpPath;
        dfs(graph,tmpPath,0,graph.size()-1);

        return ans;
        
        
    }
    void dfs(vector<vector<int>>& graph, vector<int> &tmpPath,int src, int end){      
        tmpPath.push_back(src);
        if(src == end){
            ans.push_back(tmpPath);
        }
        
        for(int x: graph[src]){
            dfs(graph,tmpPath,x,graph.size()-1);
        }

        
        tmpPath.pop_back();
        
        
    } 
        
        
    
    
};