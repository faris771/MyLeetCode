class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length() == 0) return 0;
        
        
        unordered_set<char > st;
        
        int l = 0; int r = 0;
        int maxS = 1;
        
        
        while(r < s.length()) {
            while (st.count(s[r])) {

                st.erase(s[l]);
                
                l++;
                
                
            }
            st.insert(s[r]);
            maxS = max(maxS, r-l+1);
            
            r++;
        }
        
        return maxS;
        
    }
};