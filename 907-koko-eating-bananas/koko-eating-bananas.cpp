class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        
        int maxElement = *max_element(piles.begin(),piles.end());
        
        return binarySearch(piles,1,maxElement,h);

    }

    long getHours(vector<int>& piles, long k){
        
        long long  hours = 0;
        for(long long num : piles){
            hours += ceil((1.0*num)/k);
        }

        return hours;
    }

    int binarySearch(vector<int>& piles, long l, long r,int h){

        /*
        returns minimum k in range 
        */

                
        long minK = r;
        while (l<= r){
            cout << "[BS] K: " <<minK << endl; 

            long m =  l + (r-l)/2;

            long neededHours = getHours(piles, m);
            
            if(neededHours <= h){

                minK = min(minK,m);

                r = m -1;
            }
            else{

                l = m +1;
            }
        }

        return minK;
    }


};