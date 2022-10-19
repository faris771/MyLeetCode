class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string,vector<string> > mp;
        
        string original;
        for(auto x : strs) {
            original = x;
            sort(x.begin(), x.end());
            mp[x].push_back(original);
            
        }
        
        vector<vector<string>> ans;
        for(auto x : mp){
            ans.push_back(x.second);
            
        }
        
        
        return ans;
    }
};