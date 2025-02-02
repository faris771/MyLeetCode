class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        
        vector<int> output (n,1);

        int pre = 1;
        int post =1;


        for(int i =1; i < n; i++){
            pre*= nums[i-1];
            output[i] = pre;
        }

        for ( int i = n -2 ; i>=0 ; i--){
            post *= nums[i+1];
            output[i]*=post;

        }


        return output;
        
    }
};