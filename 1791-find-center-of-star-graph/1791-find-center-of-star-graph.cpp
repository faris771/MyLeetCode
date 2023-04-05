class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        unordered_set<int> uset;
        
        for(auto row : edges){
            if(uset.count(row[0])){
                
                return row[0];
            }
            
            uset.insert(row[0]);
            
            if(uset.count(row[1])){
                
                return row[1];
            }
            
            uset.insert(row[1]);
            
        
            
        }
        return -1;
        
        
    }
};