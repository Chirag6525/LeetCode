#include<bits/stdc++.h>
using namespace std;
class MyQueue {
    stack<int>s1,s2;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        s1.push(x);
    }
    
    int pop() {
        int x=-1;
        if(s1.empty() && s2.empty()) return x;
        if(!s2.empty()){
            x= s2.top();
            s2.pop();
            return x;
        }
        else{
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
            x  = s2.top();
            s2.pop();
            return x;
        }
    }
    
    int peek() {
        if(s1.empty() && s2.empty()) return -1;
        if(!s2.empty()) return s2.top();
        else{
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
            return s2.top();
        }
    }
    
    bool empty() {
        if(s1.empty() && s2.empty()) return true;
        return false;
    }
};
int main(){
    MyQueue* obj = new MyQueue();
    obj->push(10);
    obj->push(20);
    obj->push(30);
    cout << obj->pop() << endl;
    cout << obj->peek() << endl;
    cout << obj->empty() << endl;
    return 0;
}

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */