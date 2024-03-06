#include<algorithm>
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
    int Height(TreeNode *p,int &diameter){
        if(p==NULL) return  0;
        int x=0,y=0;
        x = Height(p->left,diameter);
        y = Height(p->right,diameter);
        diameter = max(diameter,x+y);
        return 1+max(x,y);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter = 0;
        Height(root,diameter);
        return diameter;
    }
};