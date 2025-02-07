class Solution {
public:
    bool isPalindrome(string s) {
        
        string newString ="";

        for(char c : s){
            c = toupper(c);

            if ( c >= 'A' && c<= 'Z' || c >='0' && c<= '9'  ){
                newString.push_back(c);
            }
        }  

        cout << newString << endl;

        int n = newString.length();

        // if(n%2 == 1)
        //     return 0;


        int leftPtr = 0 , rightPtr = n - 1;


        while (leftPtr <rightPtr ){
            
            if( newString[leftPtr] !=  newString[rightPtr] )
                return 0;

            leftPtr++;
            rightPtr--;
        }
    

        return 1;
    
    
    }
};
