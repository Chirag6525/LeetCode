#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* left;
    node *right;

    node(int val){
        data = val;
        left = right = nullptr;
    }
};

//In-Order Traversal (left,root,right)
void inOrder(node* root){
    if(root==nullptr)
        return;
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

//PreOrder Traversal (Root, left,Right)
void preOrder(node* root){
    if(root==nullptr)
        return;
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

//Post Order Traversal (left,right,root)
void postOrder(node* root){
    if(root == nullptr)
        return;
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

//Level order Traversal (Queue)
void levelOrder(node* root){
    if(root==nullptr)
        return;
    queue<node *> q;
    q.push(root);
    while(!q.empty()){
        node *curr = q.front();
        q.pop();
        cout << curr->data << " ";
        if(curr->left)
            q.push(curr->left);
        if(curr->right)
            q.push(curr->right);
    }
}

int main(){
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    inOrder(root);
    cout << endl;
    preOrder(root);
    cout << endl;
    postOrder(root);
    cout << endl;
    levelOrder(root);
    return 0;
}