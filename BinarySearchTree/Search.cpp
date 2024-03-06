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
    node* searchBST(node* root, int val) {
        while(root!=NULL){
            if(val==root->val) return root;
            else if(val < root->val) root = root->left;
            else root = root->right;
        }
        return NULL;
    }
};
int main(){
    Solution s;
    node *p = s.newNode(30);
    p->left = s.newNode(10);
    p->right = s.newNode(40);
    node *res = s.searchBST(p,10);
    cout << res->val;
    return 0;
}