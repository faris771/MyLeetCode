#define pb push_back

class Solution {
public:
    
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        map< vector<int>,vector<string> > mp;
        
        for(auto x : strs) {
            vector<int> a (26) ;
            for(auto c: x ){
                a[c - 'a']++;
                
            }
            
            mp[a].pb(x);
           
            
            
            
        }
        
        vector<vector<string>> ans;
        for(auto x : mp){
            ans.push_back(x.second);
            
        }
        
        
        return ans;
    }
};