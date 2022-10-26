#include<bits/stdc++.h>
#define prioq priority_queue
#define pb push_back

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        if(nums.size() == 0 )
            return 0;
        
        unordered_set<int> st(nums.begin(),nums.end());
        int max = 1;
        for(auto x : st) {
            if(!st.count(x-1)){
                int tmp= 1;
                while(st.count(tmp+x)){
                    tmp++;
                }
                if(tmp > max) max = tmp;
                
            }
            
            
        }
        
        return max;
    }
};