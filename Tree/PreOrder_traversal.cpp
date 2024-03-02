#include<bits/stdc++.h>
using namespace std;



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
    void preorder(TreeNode * root,vector<int>&PreOrder){
        if(root==NULL) return;
        PreOrder.push_back(root->val);
        preorder(root->left,PreOrder);
        preorder(root->right,PreOrder);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>PreOrder;
        preorder(root,PreOrder);
        return PreOrder;
    }
};
