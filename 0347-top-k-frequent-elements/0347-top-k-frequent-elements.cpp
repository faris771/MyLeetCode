#include <bits/stdc++.h>
#define pb push_back

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    
        
        unordered_map<int,int> mp;
        for(int i = 0; i<nums.size();i++) {            
        
            mp[nums[i]] ++;
        
        }
        
        
        vector<vector<int>> v(nums.size() + 1);
        
        for(auto x : mp) {
            
            v[x.second].pb(x.first);
            
        }

        vector<int> ans;
        
        
        for(int i =nums.size();i>=0;i--) {
            if(ans.size() == k){
                return ans;
            }
            
            for(int num : v[i]) {
        
                ans.pb(num);
            
            }
            
        }
        
        
        
    return ans;
    }
    
        
        
        
};
