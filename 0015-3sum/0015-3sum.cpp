class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans; 
        if(nums.size() < 3) return ans;
        sort(nums.begin(), nums.end());
        // unordered_set<int> st;
        

        for(int i =0; i<nums.size()-2; i++ ) { // we want to choose 3, so we don't get out of bound
            int target = -nums[i];
            if(i> 0 && nums[i] == nums[i-1])
                continue;

            int l = i+1 , r = nums.size() - 1;
            while(l < r ){
            
                if(nums[l] + nums[r] < target)
                    l++;
                else if(nums[l] + nums[r] > target)
                    r--;
                else{
                    vector<int> tmp = {nums[l],nums[r],-target};
                    ans.push_back(tmp);

                    l++;
                    while(nums[l] == nums[l-1]  && l < r)// u either inc l or dec r, but make sure that  l - assume it' used-
                           // not already used previously 
                        l ++;
                }

            }        


        }
        return ans;
    }
};
