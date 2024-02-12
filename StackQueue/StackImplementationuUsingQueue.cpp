#include<bits/stdc++.h>
using namespace std;
class MyStack {
    queue <int> q1,q2;
public:
    MyStack() {
        
    }
    
    void push(int x) {
        q2.push(x);
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        swap(q1,q2);
    }
    
    int pop() {
        if(q1.empty()) return -1;
        else{
            int x = q1.front();
            q1.pop();
            return x;
        }
    }
    
    int top() {
        if(q1.empty()) return -1;
        return q1.front();
    }
    
    bool empty() {
        if(q1.empty()) return true;
        return false;
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
int main(){
    MyStack* obj = new MyStack();
    obj->push(10);
    obj->push(20);
    cout << obj->pop() << endl;
    cout << obj->top() << endl;
    cout << obj->empty() << endl;
    return 0;
}