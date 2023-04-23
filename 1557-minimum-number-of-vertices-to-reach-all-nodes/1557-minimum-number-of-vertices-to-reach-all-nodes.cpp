class Solution {
    
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
    
        vector<bool> freq(n,0);
        
        for(vector<int> x : edges){
            
            freq[x[1]] = 1;
            
        }
        vector<int> ans;
        
        for(int i = 0 ; i< n; i++){
            
            if(freq[i] == 0 )
                ans.push_back(i);
            
        }
        
        
        return ans;
        
    }
};