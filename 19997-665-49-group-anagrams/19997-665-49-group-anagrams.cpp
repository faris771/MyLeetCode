class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        vector<int> freq(26,0);

        map< vector<int>,vector<string> > mp;


        // iterate over the vector
        for(int i=0;i<strs.size();i++){


            // iterate over string
            for(int j = 0; j < strs[i].length();j++){

                int character = strs[i][j] -'a';
                freq[character]++;

            }

            // for(int x:  freq) cout <<x;

            // cout <<endl;

            mp[freq].push_back(strs[i]);
            fill(freq.begin(),freq.end(),0);

        }

        vector<vector<string>> ans;


        for(auto iter: mp){            
            
            cout << iter.second[0] << endl;

            ans.push_back(iter.second);
        }

        return ans;
    }
};
