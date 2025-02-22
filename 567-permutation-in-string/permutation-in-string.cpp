class Solution {
public:

    bool checkInclusion(string s1, string s2) {

        vector<int> freq1(26,0);
        int n1 = s1.length();

        for(char x : s1){
            freq1[x-'a']++;
        }
    
        vector<int> freq2(26,0);
        int n2 =s2.length();



        if(n2 < n1)
            return 0;

        for(int i =0;i<n1;i++){
            freq2[s2[i] -'a']++;
        }

        int l=0;

        for(int r = n1 -1; r<n2; r++, l++){

            if(r != n1-1){

                // freq2[s2[l] - 'a']++;
                freq2[s2[r] - 'a']++;
            }

            if(freq2 == freq1)
                return 1;

            
            freq2[s2[l] - 'a']--;
            // freq2[s2[r] - 'a']--;
            
        }

        return 0;
    }
};