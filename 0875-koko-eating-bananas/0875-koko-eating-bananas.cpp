class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        
        int max_k = *max_element(piles.begin(),piles.end());
        
        vector<int> all_k;
        
        
        // piles = [3,6,7,11]
        // all_k = [1,2,3,4,....,11];
        
        int min_k = max_k;
            
        // binary search
        
        int l = 1, r = max_k;
        int mid;
        
        long int current_hours;
        while(l<= r){
            
            mid= (l + r) / 2;
            current_hours = 0;
            for(int x : piles){
                current_hours += ceil(1.0 * x/mid);
            }     
    

            if(current_hours > h)
                l = mid+1;
            else{

                r = mid -1;
                min_k = min(mid,min_k);
                
            }
            
        }
        
        return min_k;
        
        
    
    
    }
};