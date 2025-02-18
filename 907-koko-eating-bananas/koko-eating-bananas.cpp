class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        

        sort(piles.begin(), piles.end()); // nlogn

        int n = piles.size();

        int k = -1;



        for(int i=0;i<n;i++){
            
            k = piles[i];

            if(getHours(piles,k) <= h){

                if (i == 0 ){
                    return binarySearch(piles,1,piles[i],h,k);
                }
                else{

                    return binarySearch(piles, piles[i-1], piles[i],h,k);    
                }
            }
            

        }

        return k;
    }

    long getHours(vector<int>& piles, long k){
        
        cout << k << endl;
        long long  hours = 0;
        for(long long num : piles){
            // cout << "num: " << num << endl;
            hours += ceil((1.0*num)/k);
            // cout << "hours " << hours << endl; 
        }

        // cout << k <<" " <<  hours << endl;
        return hours;
    }

    int binarySearch(vector<int>& piles, long l, long r,int h, long k){

        /*
        returns minimum k in range 
        */

        long minK = k;
        


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