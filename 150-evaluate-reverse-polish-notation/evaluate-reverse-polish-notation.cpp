class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        
        stack<string> stk;

        int ans = stoi(tokens[0]);


        for (string s : tokens){
            
            if (s == "*" || s == "/" || s == "+" || s == "-"){
                

                int num1 = stoi(stk.top());
                stk.pop();
                int num2 = stoi(stk.top());
                stk.pop();
                

                if(s == "*"){
                    ans = num1 * num2;

                }
                else if (s == "/"){
                    ans = num2 / num1;

                }
                 else if (s == "+"){
                    ans = num1 + num2;

                }
                 else if (s == "-"){
                    ans = num2 - num1;

                }

                stk.push(to_string(ans));

            }else{

                stk.push(s);
            }



        }

        return ans;

        
    }
};