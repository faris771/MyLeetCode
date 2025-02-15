class Solution {
public:
    int carFleet(int target, vector<int>& pos, vector<int>& speed) {

        int n = speed.size();
        vector<pair<int,int>> v(n);

        for(int i =0; i <n;i++){
            
            v[i] = {pos[i],speed[i]};
        }

        sort(v.begin(), v.end(), std::greater<>()); // desc order
        
        stack<pair<double,double>> timeStack;

        int ans = 1;

        double maxVal = 0;
        for(auto iter : v){

            double time = (target - iter.first) / (1.0* iter.second);
            maxVal = std::max(maxVal,time);
            if(!timeStack.empty()){
                
                if(time > timeStack.top().second){
                    ans++;
                }

            }

            timeStack.push({time,maxVal});

        }



        return ans;
        

    }
};