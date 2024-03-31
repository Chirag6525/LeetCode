#include<bits/stdc++.h>

 struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };

class Solution {
public:
    int height(TreeNode *p){
        if(p==NULL) return 0;
        int x =0, y =0;
        x = height(p->left);
        if(x==-1) return -1;
        y = height(p->right);
        if(y==-1) return -1;
        if(abs(x-y)>1) return -1;
        return x>y?x+1:y+1;
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL) return true;
        return height(root)!=-1;
    }
};