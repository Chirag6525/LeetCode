#include <bits/stdc++.h>
using namespace std;
//Declaration
struct node{
    int data;
    node *next;
};
node *head = nullptr;
// Insertion
//1. Insertion at start
void insertStart(int val){
    node* newNode = new node();
    newNode->data = val;
    newNode->next = head;
    head = newNode;
}

//2. Insertion at End
void insertEnd(int val){
    node* newNode = new node();
    newNode->data = val;
    newNode->next = nullptr;
    if(head==nullptr){
        head = newNode;
        return;
    }
    node *temp = head;
    while(temp->next != nullptr){
        temp = temp->next;
    }
    temp->next = newNode;
}

//3.Insertion at Position
void insertPos(int val, int pos){
    node *newNode = new node();
    newNode->data = val;
    if(pos==0){
        newNode->next = head;
        head = newNode;
        return;
    }
    node* temp = head;
    for (int i = 0; i < pos - 1 && temp;i++){
        temp = temp->next;
    }
    if(!temp){
        cout << "Position Invalid";
        return;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

//Deletion
//1. Delete from start
void deleteStart(){
    if(!head){
        cout << "Nothing to delete";
        return;
    }
    node *temp = head;
    head = head->next;
    delete temp;
}

//2. Delete from end
void deleteEnd(){
    if(!head){
        cout << "Nothing to delete";
        return;
    }
    if(!head->next){
        delete head;
        head = nullptr;
        return;
    }
    node* temp = head;
    node* prev = nullptr;
    while(temp->next){
        prev = temp;
        temp = temp->next;
    }
    prev->next = nullptr;
    delete temp;
}

//3. Delete from position
void deletePos(int pos){
    if(!head){
        cout << "Nothing to delete";
        return;
    }
    if(pos==0){
        node *temp = head;
        head = head->next;
        delete temp;
        return;
    }
    node *curr = head;
    node *prev = nullptr;
    for (int i = 0; i < pos && curr;i++){
        prev = curr;
        curr = curr->next;
    }
    if(!curr){
        cout << "Invalid Pos";
        return;
    }
    prev->next = curr->next;
    delete curr;
}

//Traversal
void traversal(){
    node *temp = head;
    while(temp){
        cout << temp->data << " >> ";
        temp = temp->next;
    }
    cout << endl;
}

//Searching
void searching(int val){
    node *temp = head;
    while(temp){
        if(temp->data == val){
            cout << "Found" << endl;
            return;
        }
        temp = temp->next;
    }
    cout << "Not Found" << endl;
}

int main(){
    insertStart(10);
    insertEnd(20);
    insertPos(30, 2);
    insertPos(40, 2);
    traversal();
    searching(20);
    deleteStart();
    deleteEnd();
    deletePos(0);
    traversal();
    return 0;
}

