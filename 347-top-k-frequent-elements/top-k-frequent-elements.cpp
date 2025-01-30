class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        //bucket sort instead of using the nums as indes, we used the freq as indes, and value is the list of ints that has that freq

        unordered_map<int,int> mp;
        for(int i =0; i< nums.size();i++){
            mp[nums[i]]++;
        }

        
        vector<vector<int>> freq(nums.size() + 1);
        
        for(auto iter: mp){
            freq[iter.second].push_back(iter.first);
        }

        vector<int> ans;
        
        for(int i = freq.size()-1; i>=0 ;i--){
            
            for(int j  =0; j<freq[i].size();j++){
                ans.push_back(freq[i][j]);
                if(ans.size() == k){
                    return ans;
                }

            }
            

        }







        return ans;



    }
};