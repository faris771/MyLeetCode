class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> pre (n);
        vector<int> post (n);

        if (n ==1 )
            return nums;


        pre[0] = nums[0];
        post[n-1] = nums[n-1];

        
        for(int i =1 ; i <n;i++){
            pre[i] = nums[i] * pre[i-1];
        }


        for(int i =n-2 ; i >=0;i--){
            post[i] = post[i+1] * nums[i];
        }

        for(int i =0 ; i< n ; i++){
            
            if (i ==0){
                nums[i] =post[i+1];
            }
            else if(i==n-1){
                nums[i] = pre[i-1];    
            }
            else
                nums[i] = pre[i-1]*post[i+1];

        }

        return nums;
        
    }
};