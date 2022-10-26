#define prioq priority_queue
#define pb push_back

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        map<int,int> mp;
        
        for(int x : nums) {
            mp[x] = 1;
            
        }
        int i =0 ;
        int prevK;
        prioq<int> pq;
        int cnt = 1;
        if(nums.size() == 0 )
            return 0;
        
        for(auto kv : mp) {
            if(i == 0) {
                prevK = kv.first;
                i++;
                continue;
            
            }
            if(kv.first - prevK == 1)
                cnt++;
            else{
                pq.push(cnt);
                cnt = 1;
            }
            
           
            
            prevK = kv.first;
            
            i++;
            
        }
        pq.push(cnt);
        return pq.top();
        
    }
};