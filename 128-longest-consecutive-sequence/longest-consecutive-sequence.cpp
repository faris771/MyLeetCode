class Solution {
public:
    int longestConsecutive(vector<int>& nums) {


        unordered_set<int> st(nums.begin(), nums.end());

      
        int n = nums.size();
        int max_ans =1;

        if(n<=1)
            return n;

        for(int i : st){

            int  tmp_ans =1;
            if(st.find(i -1 ) == st.end()){
                // start of sequence  start checking for incremental values (+1)
                
                int j  = i +1;
                while(1){
                    if(st.find(j) == st.end()){
                        break;
                    }
                    tmp_ans++;
                    j++;
                    
                }

                max_ans = max(max_ans,tmp_ans);


            }
        }

        return max_ans;
    }
};
