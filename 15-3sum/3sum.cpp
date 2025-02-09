class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector<vector<int>> ans;

        std::sort(nums.begin(), nums.end());
        
        int n = nums.size();

        int l  =0, r = n -1 ;

        for(int i =0; i < n-2;i++){
            
            if(i>0 && nums[i] == nums[i-1] )
                continue;

            int target =  -nums[i];

            l = i +1;
            r = n-1;

            while(l<r){
                if(nums[l] + nums[r] == target){
                    ans.push_back({nums[i],nums[l],nums[r]});

                    l++;
                    while(l<r && nums[l] == nums[l-1]){
                        l++;

                    }
                    // while(l<r && nums[r-1] == nums[r]){
                    //     r--;
                        
                    // }


                    // l++;
                    // r--;
                

                }
                else if (nums[l] + nums[r] < target){
                    l++;
                }
                else{
                    r--;
                }
                
            }



        }

        return ans;
    }
};