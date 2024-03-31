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
    int pathSum(TreeNode* root,int &maxi){
        if(root==NULL) return 0;
        int x = max(0,pathSum(root->left,maxi));
        int y = max(0,pathSum(root->right,maxi));
        int val = root->val;
        maxi = max(maxi,x+y+val);
        return max(x,y)+val;
    }
    int maxPathSum(TreeNode* root) {
        int maxi = INT_MIN;
        pathSum(root,maxi);
        return maxi;
    }
};
int main(){
    Solution s;
    TreeNode *root = s.newNode(-10);
    root->left = s.newNode(9);
    root->right = s.newNode(20);
    cout << "Maximum path: "<<s.maxPathSum(root);
    return 0;
}