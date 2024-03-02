#include<bits/stdc++.h>
using namespace std;
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void postorder(TreeNode* root,vector<int>&PostOrder){
        if(root==NULL) return;
        postorder(root->left,PostOrder);
        postorder(root->right,PostOrder);
        PostOrder.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>PostOrder;
        postorder(root,PostOrder);
        return PostOrder;
    }
};