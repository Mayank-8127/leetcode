// Last updated: 2/11/2026, 1:49:30 AM
class MyStack {
public:
    queue<int> que;
    queue<int> que2;
    MyStack() {
        
    }
    
    void push(int x) {
        que2.push(x);
        while(!que.empty()){
            que2.push(que.front());
            que.pop();
        }
        swap(que, que2);
    }
    
    int pop() {
        int result = que.front();
        que.pop();
        return result;
    }
    
    int top() {
        return que.front();
    }
    
    bool empty() {
        return que.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */