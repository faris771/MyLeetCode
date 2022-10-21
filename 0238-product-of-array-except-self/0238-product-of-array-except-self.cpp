class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        vector<int> ans(nums.size());
        vector<int> pre(nums.size());
        vector<int> post(nums.size());
        
        pre[0] =1 ;
        post[nums.size()-1] = 1;
        
        for(int i =1 ; i<nums.size();i++) {
            pre[i] = pre[i-1]*nums[i-1];
            
            
            
        }
        ans[nums.size()-1] = pre[nums.size()-1] * post[nums.size()-1];
        
        for(int i =nums.size() -2  ; i>=0;i--) {
            post[i] = post[i+1] * nums[i+1];;
            ans[i] = pre[i] * post[i];
        
            
        }
        
        
        
        
        return ans;
    }
};