class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l = 0 , r = 1, n = prices.size();
        
        int ans = 0;
        if(n == 1)
            return 0;

        if( n == 2)
            return max(0, prices[1]-prices[0]);
    
        while(r<n){
            
            int profit = prices[r] -prices[l];

            if(profit > 0 ){
                ans = max(ans, profit);
            }else{
                l = r;
            }


            r++;
        }
        return ans;
    }
};