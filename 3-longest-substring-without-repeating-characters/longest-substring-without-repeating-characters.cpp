class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        unordered_map<char, int> freq; 
        int l = 0, ans = 0;
        int r =0;
        
        while(r < n){

            if(freq.count(s[r])) { // element found b4
                l = max(l,freq[s[r]] +1);
            }

            freq[s[r]] = r;

            ans = max(ans, (r-l +1));

            r++;
        }

        return ans;



        // for (int r = 0; r < n; r++) {
        //     if (freq.count(s[r])) {
        //         l = max(l, freq[s[r]] + 1); 
        //     }
        //     freq[s[r]] = r; 
        //     ans = max(ans, r - l + 1); 
        // }
    }
};
