class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int n = nums.size();
        int l =0, r = n- 1, mid = n/2;

        if(n == 1){
            return target == nums[0]? 0 : -1;
        }
        while(l<=r){

            mid = (r+l) /2;
            
            if(nums[mid]== target){
                return  mid;
            }

            if(target > nums[mid] ){
                l = mid +1;
            }
            else{
                r = mid -1;
            }

        }

        return -1;

    }
};