// Last updated: 2/11/2026, 4:18:11 PM
class MinStack {
public:
    long long min;
    stack<long long> s;
    MinStack() {
        min = INT_MAX;
    }
    
    void push(long long val) {
        if(s.empty()){
            min = val;
            s.push(val);
        }
        else{
            if(val < min){
                long long temp = min;
                min = val;
                val = 2*val - temp;
            }
            s.push(val);
        }
    }
    
    void pop() {
        long long top = s.top();
        if(top < min){
            min = 2*min - top;
        }
        s.pop();
        if(s.empty()){
            min = INT_MAX;
        }
    }
    
    int top() {
        if(s.top() < min){
            return min;
        }
        return s.top();
    }
    
    int getMin() {
        return min;
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