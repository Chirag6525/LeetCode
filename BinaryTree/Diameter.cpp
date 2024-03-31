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
        TreeNode* createTreeFromArray(vector<int>& arr) {
        if (arr.empty()) {
            return nullptr;
        }
        TreeNode* root = new TreeNode(arr[0]);
        queue<TreeNode*> q;
        q.push(root);
        int i = 1;
        while (i < arr.size()) {
            TreeNode* curr = q.front();
            q.pop();
            if (i < arr.size()) {
                curr->left = new TreeNode(arr[i++]);
                q.push(curr->left);
            }
            if (i < arr.size()) {
                curr->right = new TreeNode(arr[i++]);
                q.push(curr->right);
            }
        }
        return root;
    }
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
int main(){
    Solution s;
    vector<int>tree{1,2,3,4,5};
    TreeNode *root = s.createTreeFromArray(tree);
    cout << "Diameter of the tree: " << s.diameterOfBinaryTree(root);
    return 0;
}