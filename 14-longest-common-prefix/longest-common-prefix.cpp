class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {



        string ans ="";
        for(int i =0;i<strs[0].length();i++){
            for(string s : strs){
                if(s[i]!= strs[0][i]){
                    return ans;
                }
            }

            ans += strs[0][i];
        }


        return ans;


    }
};