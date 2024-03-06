#include<bits/stdc++.h>
using namespace std;
struct node {
  int val;
  struct node * left, * right;
};

class Solution {
public:
    node * newNode(int data) {
        node * n = new node;
        n -> val = data;
        n -> left = NULL;
        n -> right = NULL;

        return n;
    }
    bool isSameTree(node* p, node* q) {
        if(p==NULL && q==NULL) return true;
        else if(p==NULL || q==NULL) return false;
        return (p->val==q->val) && isSameTree(p->left,q->left) && isSameTree(p->right,q->right);
    }
};
int main(){
    Solution s;
    node *p = s.newNode(30);
    p->left = s.newNode(10);
    p->right = s.newNode(40);
    node *q = s.newNode(30);
    q->left = s.newNode(10);
    q->right = s.newNode(40);
    if(s.isSameTree(p,q)){
        cout << "Trees are Identical";
    }
    else{
        cout << "Trees are unidentical";
    }
    return 0;
}