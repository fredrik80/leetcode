// 225. Implement Stack using Queues
// Easy

class MyStack {
private:
vector<int> stack;

public:
   
    void push(int x) {
        stack.insert(stack.begin(),x);
    }
    
    int pop() {
        int value = stack[0];
        stack.erase(stack.begin());

        return value;
    }
    
    int top() {
        return stack[0];
    }
    
    bool empty() {
        if (stack.size() == 0){
            return true;
        } else {
            return false;
        }
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
