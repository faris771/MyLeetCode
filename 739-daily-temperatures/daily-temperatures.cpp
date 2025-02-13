class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& tmps) {

 
        stack<pair<int,int>> __stack;

        int n = tmps.size();
        vector<int> ans(n);

        if(n == 1 ){
            ans[0] = 0;
            return ans;
        }

        __stack.push({tmps[0],0});

        for(int i =1; i<n;i++){

            while(!__stack.empty() && tmps[i] > __stack.top().first){
                int targetIndex = __stack.top().second;
                ans[targetIndex] = i - targetIndex;
                __stack.pop();
                
            }    

            __stack.push({tmps[i],i});

        }
        



        return ans;
    }
};