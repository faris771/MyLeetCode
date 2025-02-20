class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        unordered_map<char, int> freq; 
        int l = 0, ans = 0;

        for (int r = 0; r < n; r++) {
            if (freq.count(s[r])) {
                l = max(l, freq[s[r]] + 1); 
            }
            freq[s[r]] = r; 
            ans = max(ans, r - l + 1); 
        }
        return ans;
    }
};
