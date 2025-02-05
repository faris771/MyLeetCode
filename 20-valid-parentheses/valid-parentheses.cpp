class Solution {
public:
    bool isValid(string s) {


        stack<char> open;
        stack<char> close;

        if(s.length() %2 == 1  ) // odd string always false 
            return false;

        for(char c : s){
            
            if(c =='(' || c =='{' || c == '['){
                open.push(c);

            }

            else if (c ==')' || c =='}' || c == ']'  ){
                close.push(c);

                if(open.empty()){
                    return false ;
                }


                if(invertPar(close.top()) != open.top()){
                    return false;
                }

                // same 

                open.pop();
                close.pop();
                

            }
           
        }

        return open.empty() & close.empty();

        //     return true;
        // else
        //     return false;

        
    }




    char invertPar(char c){
        if(c == ')'){
         
            return '(';
        
        }
        else if( c == ']'){
         
            return '[';
        
        }
        else{
         
            return '{';
        
        }
    }
};