class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int n = height.size();
        
        int l = 0  , r = n - 1;


        int maxArea =0;
        while (l < r ){
            
            int min_h = -1;
            if(height[l]<= height[r]){
                min_h = height[l];
                l++;

            }else{
                min_h = height[r];
                r--;
            }

            int currentArea = (r-l +1)  * min_h;
            maxArea= max(maxArea, currentArea);


        }

        return maxArea;

    }
};