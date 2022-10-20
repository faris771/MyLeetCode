class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        vector<int> ans(nums.size());
        
        int pdct= 1;
        int pdctZ = 1;
        
        int zcnt = 0;
        for(int num : nums) {
            pdct *= num;
            if(num != 0) pdctZ *=num;
            
            if(num == 0){zcnt++;}
            
        }
        
        for(int i =0;i<nums.size();i++){
            if(zcnt >=2){
                ans[i] = 0;
            }else{
                
                
                if(nums[i] == 0 ) ans[i] = pdctZ;
                else ans[i] = pdct / nums[i];
            }
            
             
        }
        
        return ans;
    }
};