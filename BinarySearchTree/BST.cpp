#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *left;
    node *right;

    node(int val){
        data = val;
        left = right = nullptr;
    }
};

// Insert a value in BST
node* insert(node* root,int val){
    if(root==nullptr)
        return new node(val);
    if(val < root->data)
        root->left = insert(root->left, val);
    else if(val>=root->data)
        root->right = insert(root->right, val);
    return root;
}

// Search a value in BST
bool search(node* root, int key){
    if(root==nullptr)
        return false;
    if(root->data == key)
        return root;
    return (key < root->data ? search(root->left, key) : search(root->right, key));
}
//Minimum node in BSt
node* findMin(node* root){
    while(root->left != nullptr)
        root = root->left;
    return root;
}
// delete a value in BST
node* deleteV(node* root, int key){
    if(root==nullptr)
        return root;
    if(key < root->data)
        root->left = deleteV(root->left, key);
    else if(key > root->data)
        root->right = deleteV(root->right, key);
    else{
        //No Child
        if(root->left == nullptr && root->right == nullptr){
            delete root;
            return nullptr;
        }
        // One Child
        else if(root->left==nullptr){
            node *temp = root->right;
            delete root;
            return temp;
        }
        else if(root->right==nullptr){
            node *temp = root->left;
            delete root;
            return temp;
        }
        // Two Children
        node *temp = findMin(root->right);
        root->data = temp->data;
        root->right = deleteV(root->right, temp->data);
    }
    return root;
}

//Inorder traversal(left,root,right)
void inOrder(node* root){
    if(root==nullptr)
        return;
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}



int main(){
    node *root = nullptr;
    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 12);
    root = insert(root, 4);
    root = insert(root, 1);
    inOrder(root);
    cout << endl;
    root = deleteV(root, 4);
    inOrder(root);
    cout << endl;
    cout << search(root, 20);
    return 0;
}
