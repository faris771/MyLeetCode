class Solution {
public:
    int binary_search(vector<int>& nums, int target, int l, int r ) {
        

        if(l>r)
            return -1;

        int m = l + (r-l)/2;

        if(nums[m] == target)
            return m;
        if( target> nums[m]){
            return binary_search( nums,  target,  m+1,  r ) ;
        }
        else{
            return binary_search(nums,  target,  l,  m-1 );

        }


        
    }

    int search(vector<int>&nums, int target) {
        return binary_search(nums,target,0,nums.size() -1);
    }

};