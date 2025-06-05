#include<bits/stdc++.h>
using namespace std;

struct Stack {
    int size;
    int top;
    int *arr;
    //Construction
    Stack(int s){
        size = s;
        top = -1;
        arr = new int[size];
    }
    //Push Operation
    void push(int val){
        if(top >= size-1){
            cout << "Overflow" << endl;
            return;
        }
        arr[++top] = val;
    }

    //Pop Operation
    void pop(){
        if(top <0){
            cout << "Underflow" << endl;
            return;
        }
        top--;
    }
    //Peek Operation
    int peek(){
        if(top<0){
            cout << "Underflow" << endl;
            return -1;
        }
        return arr[top];
    }
    //Count 
    int count(){
        return top + 1;
    }
    //Display
    void display(){
        if(top<0){
            cout << "Stack is empty" << endl;
            return;
        }
        for (int i = top; i >= 0;i--){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    ~Stack(){
        delete[] arr;
    }
};

int main(){
    Stack s(5);
    s.push(10);
    s.display();
    s.push(20);
    s.display();
    s.push(30);
    s.display();
    s.pop();
    s.display();
    cout << s.count() << endl;
    cout << s.peek() << endl;
    s.display();
    return 0;
}