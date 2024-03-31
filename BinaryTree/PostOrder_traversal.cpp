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
    TreeNode * newNode(int data) {
        TreeNode *n = new TreeNode;
        n -> val = data;
        n -> left = NULL;
        n -> right = NULL;

        return n;
    }
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
int main(){
    Solution s;
    TreeNode *root = s.newNode(30);
    root->left = s.newNode(10);
    root->right = s.newNode(40);
    vector<int>result = s.postorderTraversal(root);
    for(auto it: result){
        cout << it << " ";
    }
    return 0;
}