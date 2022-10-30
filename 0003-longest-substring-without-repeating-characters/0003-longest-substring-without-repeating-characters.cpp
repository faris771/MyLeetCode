class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length() == 0) return 0;
        
        unordered_set<char> SET;
        
        int l =0, r=0;
        int ans = 0;
        
        while(r  < s.length()) {
            while(SET.count(s[r])) {
                SET.erase(s[l]);
                l++;
                
                
            }            
            SET.insert(s[r]);
            
            ans = max(ans, r-l+1);
            r++;
        }
                
    
        
        return ans;
        
    }
};