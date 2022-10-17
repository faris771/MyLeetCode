class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() !=t.length() ) return false ;
            
        unordered_map <char,int> mp1;
        unordered_map <char,int> mp2;

        
        for(int i =0;i<s.length();i++) {
            mp1[s[i]] ++;
            mp2[t[i]]++;
            
            
            
        }
        
        if(mp1 == mp2 )return true;
        return false;
       
        
        
        
        
        return true;
        
        
    }
};