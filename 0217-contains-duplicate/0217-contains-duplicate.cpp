class Solution {
public:
    
    
    bool containsDuplicate(vector<int>& nums) {
        
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);    
        
        unordered_set<int> s;
        
        for(int i=0;i< nums.size();i++) {
            
            if(s.insert(nums[i]).second == false ) return true;  // already exists, 1 inserted succ , false not succ
        }
        return false;
        
        
        
        
        
        
    }
};