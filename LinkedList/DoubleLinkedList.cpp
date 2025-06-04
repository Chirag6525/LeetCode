#include <bits/stdc++.h>
using namespace std;
struct node{
    node *prev;
    int data;
    node *next;
};
node *head = nullptr;
node *tail = nullptr;

//Insertion
//1. Insert at Start
void insertStart(int val){
    node *newNode = new node();
    newNode->data = val;
    newNode->prev = nullptr;
    newNode->next = head;
    if(head)
        head->prev = newNode;
    head = newNode;
    if(!tail)
        tail = newNode;
}

//2. Insert at End
void insertEnd(int val){
    node *newNode = new node();
    newNode->data = val;
    newNode->next = nullptr;
    newNode->prev = tail;
    if(tail)
        tail->next = newNode;
    tail = newNode;
    if(!head)
        head = newNode;
}

//3. Insert at Pos
void insertPos(int val, int pos){
    node *newNode = new node();
    newNode->data = val;
    newNode->prev = nullptr;
    newNode->next = nullptr;
    if(pos==0){
        newNode->next = head;
        if(head)
            head->prev = newNode;
        head = newNode;
        if(!tail)
            tail = newNode;
        return;
    }
    node* temp = head;
    for (int i = 0; i < pos - 1 && temp;i++){
        temp = temp->next;
    }
    if(!temp){
        cout << "Invalid Position";
        return;
    }
    newNode->prev = temp;
    newNode->next = temp->next;
    if(temp->next)
        temp->next->prev = newNode;
    temp->next = newNode;
    if(!newNode->next)
        tail = newNode;
}

//Deletion
//1. Deletion from start
void deleteStart(){
    if(!head){
        cout << "Nothing to delete";
        return;
    }
    node *temp = head;
    head = temp->next;
    if(head) 
        head->prev = nullptr;
    else
        tail = nullptr;
    delete temp;
}

//2. Deletion from end
void deleteEnd(){
    if(!tail){
        cout << "nothing to delete";
        return;
    }
    node *temp = tail;
    tail = tail->prev;
    if(tail){
        tail->next = nullptr;
    }
    else{
        head = nullptr;
    }
    delete temp;
}

//3. Deletion at Pos
void deletePos(int pos){
    if(!head){
        cout << "Nothing to delete";
        return;
    }
    if(pos==0){
        node *temp = head;
        head = head->next;
        if(!head){
            head->prev = nullptr;
        }
        else{
            tail = nullptr;
        }
        delete temp;
        return;
    }
    node* temp = head;
    for (int i = 0; i < pos && temp;i++){
        temp = temp->next;
    }
    if(!temp){
        cout << "iNvalid Position";
        return;
    }
    if(temp->prev)
        temp->prev->next = temp->next;
    if(temp->next)
        temp->next->prev = temp->prev;
    if(!temp->next)
        tail = temp->prev;
    if(!temp->prev)
        head = temp->next;
    delete temp;
}

//Traversal
void traversal(){
    node *curr = head;
    while(curr){
        cout << curr->data << " << ";
        curr = curr->next;
    }
    cout << endl;
}

//Searching
void searching(int val){
    node *curr = head;
    while(curr){
        if(curr->data == val){
            cout << "Found" <<endl;
            return;
        }
        curr = curr->next;
    }
    cout << "not Found" << endl;
}
int main(){
    insertStart(10);
    insertEnd(20);
    insertPos(30, 1);
    insertPos(40, 2);
    traversal();
    searching(30);
    deleteStart();
    traversal();
    deleteEnd();
    traversal();
    deletePos(1);
    traversal();
}