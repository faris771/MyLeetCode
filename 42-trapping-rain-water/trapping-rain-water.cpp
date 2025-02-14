class Solution {
public:
    int trap(vector<int>& height) {

        // O(N) memory 



        int n = height.size();
        if(n<=1)
            return 0;

        vector<int> pre (n);
        vector<int> post (n);
        pre[0] = 0;

        int ans = 0;

        
        // fill pre

        int maxLeftSum = 0;
        
        for(int i =1; i < n; i++){
            maxLeftSum = max(maxLeftSum, height[i-1]);
            pre[i] = maxLeftSum;

        }

        int maxRightSum = 0;

        post[n-1] = 0;
        for(int i =n-2; i >= 0; i--){
            maxRightSum = max(maxRightSum, height[i+1]);
            post[i] = maxRightSum;
        }


        for(int i =0;i<n;i++){
            ans += max(0 , ( min(pre[i],post[i]) - height[i])  );
        }

        return ans;
    }
};