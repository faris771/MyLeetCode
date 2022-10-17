class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        int size =  nums.size();
        set<int> s;
        
        for(int i =0 ;i<nums.size();i++) {
            
            s.insert(nums[i]);
            
        }
        
        if(s.size() == size){
            // cout << "true" << endl;
            return false;
            
        }else{
            // cout << "false" << endl;
            return true;
        }
        
        
    }
};