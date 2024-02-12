#include<bits/stdc++.h>
using namespace std;
class MinStack {
    stack<int>stk,mini;
    
public:
    MinStack() {
        
    }
    
    void push(int val) {
        stk.push(val);
        if(!mini.empty()){
            val = min(val,mini.top());
        }
        mini.push(val);
    }
    
    void pop() {
        stk.pop();
        mini.pop();
    }
    
    int top() {
        return stk.top();
    }
    
    int getMin() {
        return mini.top();
    }
};
int main(){
    MinStack* obj = new MinStack();
    obj->push(10);
    obj->push(20);
    obj->push(30);
    cout << obj->top() << endl;
    cout << obj->getMin() << endl;
    return 0;
}
/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */