class Solution {
public:
    int characterReplacement(string s, int k) {
        
        int l = 0;
        int n = s.length();

        unordered_map<char,int> mp;
        int maxFreq = 0;
        int ans = 0;
        for(int r = 0 ;r<n;r++){
            
            mp[s[r]]++;

            maxFreq = max(maxFreq, mp[s[r]]);
            
            while( ( (r-l +1) - maxFreq) > k){

                mp[s[l]]--;
                l++;

            }
        
            ans = max(ans, r-l + 1 );

        }

        
        return ans;


    }
};