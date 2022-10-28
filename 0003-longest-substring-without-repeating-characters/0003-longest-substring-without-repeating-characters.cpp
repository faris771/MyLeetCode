class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length() == 0) return 0;
        
        
        unordered_map<char, int > mp;
        
        int l = 0; int r = 0;
        int maxS = 1;
        
        
        while(r < s.length()) {
            while (mp[s[r]] != 0) {

                mp[s[l]] --;
                
                l++;
                
                
            }
            mp[s[r]]++;
            maxS = max(maxS, r-l+1);
            
            r++;
        }
        
        return maxS;
        
    }
};