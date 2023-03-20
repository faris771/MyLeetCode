class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum = 0;
        unordered_map<int,int> hm;
        
        
        if(nums.size() == 0)
            return 0;
        
        int cnt = 0;
        for ( int i =0; i<nums.size();i++){
            
            sum += nums[i];
            if(sum == k){
                cnt++;
            }
            
            if(hm.count(sum-k)){
                cnt += hm[sum-k];

            }

           hm[sum]++;

            
            
            
            
        }
        
        
        return cnt;
        
    }
};