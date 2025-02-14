class Solution {
public:
    int trap(vector<int>& height) {
        // O(1) memory 

        int n = height.size();
        if(n<=1)
            return 0;
        int l = 0, r = n- 1;

        int maxLeft = height[0] , maxRight = height[n-1];
        int ans = 0;
        while ( l< r ){

            if (height[l]<= height[r]){
                
                l++;
                maxLeft = max(maxLeft,height[l]);
                ans +=maxLeft - height[l];

            }
            else{
                r--;
                maxRight = max(maxRight,height[r]);
                ans +=maxRight - height[r];

            }

        }


    

        return ans;
    }
};