#include <vector>
class MinStack {


    
private:

    vector<int> stk;
    vector<int> min_stack;


public:
    MinStack() {

 


        
    }
    
    void push(int val) {
        
        this->stk.push_back(val);

        if(min_stack.size() == 0){
            this->min_stack.push_back(val);
        }
        else{
            this->min_stack.push_back(std::min( min_stack[min_stack.size() -1], val));
        }

    }
    
    void pop() {

        this->stk.pop_back();
        this->min_stack.pop_back();
        

    }
    
    int top() {
        return this->stk[this->stk.size()-1];

    }
    
    int getMin() {
        return this->min_stack[this->min_stack.size()-1];
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */