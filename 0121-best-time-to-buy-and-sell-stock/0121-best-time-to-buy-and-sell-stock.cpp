class Solution {
public: //  7   2  4   3  1   5   4
    int maxProfit(vector<int>& p) {
        int l = 0; int r = 1;
        int maxP = 0;
        while( r < p.size()) {
            if(p[r] > p[l]) {
                maxP = max(maxP,p[r]-p[l]);
            }
            else {
                
                l = r;
                
            }
            
            
            
            r++;
            
            
        }
        
        
        
        return maxP;
    }
};