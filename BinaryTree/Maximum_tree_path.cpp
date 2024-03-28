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