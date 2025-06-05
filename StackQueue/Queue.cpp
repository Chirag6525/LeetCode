#include <bits/stdc++.h>
using namespace std;

struct Queue {
    int size;
    int front;
    int rear;
    int *arr;

    Queue(int s){
        size = s;
        front = -1;
        rear = -1;
        arr = new int[size];
    }
    bool isFull(){
        return rear >= size - 1;
    }

    bool isEmpty(){
        return front == -1 || rear == -1;
    }

    //Enqueue Opeartion
    void enqueue(int val){
        if(isFull()){
            cout << "Queue is Full";
            return;
        }
        if(front==-1)
            front = 0;
        arr[++rear] = val;
    }
    //Dequeue Operation
    void dequeue(){
        if(isEmpty()){
            cout << "Queue is Empty";
            return;
        }
        front++;
    }
    //Peek Operation
    int peek(){
        if(isEmpty()){
            cout << "Queue is Empty";
            return -1;
        }
        return arr[front];
    }
    //Display
    void display(){
        if(isEmpty()){
            cout << "Queue is Empty";
            return;
        }
        for (int i = front; i <= rear;i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    ~Queue(){
        delete[] arr;
    }
    
};
int main(){
    Queue q(3);
    cout << q.isEmpty() << endl;
    q.enqueue(10);
    q.display();
    q.enqueue(20);
    q.display();
    q.enqueue(40);
    q.display();
    cout << q.isFull() <<  endl;
    q.dequeue();
    q.display();
    cout << q.peek() << endl;
}