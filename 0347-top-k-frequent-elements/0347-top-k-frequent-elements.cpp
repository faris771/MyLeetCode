#include <bits/stdc++.h>

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    
        
        map<int,int> mp;
        for(int i = 0; i<nums.size();i++) {
            // if(mp.find(nums[i]) != mp.end()){
            
            mp[nums[i]] ++;
                
            // } 
            // else
                // map[nums[i]] =1;
        
        }
        int cnt =0 ;    
        // vector<pair<int,int> >
            
        priority_queue<pair<int,int>> q;
    
        for(auto x : mp) {
            
            q.push({x.second,x.first});
            
            
        }
        
        vector<int> ans;

        for(int i=0;i<k;i++) {
            // cout << q.top();
            ans.push_back(q.top().second);
            q.pop();
            
            
            
        }
        
        
        
        
        
        
        
        return ans;
    }
        
        
        
        
};
