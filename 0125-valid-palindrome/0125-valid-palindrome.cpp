class Solution {
public:
    bool isPalindrome(string s) {
        
        if(s == "") return true;
        int p1 = 0;
        int p2 = s.length() - 1;
        
        
        while(p1 < p2 ) {
            
            while(!iswalnum(s[p1])){
                p1++;
                if(p1 >= s.length() ) return true;
            }
            while(!iswalnum(s[p2])){
                p2--;
                if(p2 < 0 ) return true;

            }
            
            if(tolower(s[p1] ) != tolower(s[p2])) {
                
                cout << s[p1] << " " << s[p2] ;
                return false;
            
            }
                
            p1++;p2--;
            
        }
        return true;
    }
};