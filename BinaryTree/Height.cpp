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
    int maxDepth(TreeNode* root) {
        if(root==NULL) return 0;
        int x= 0,y =0;
        x = maxDepth(root->left);
        y = maxDepth(root->right);
        return x>y?x+1:y+1;
    }
};
int main(){
    Solution s;
    vector<int>tree{3,9,20,NULL,NULL,15,7};
    TreeNode *root = s.createTreeFromArray(tree);
    cout << "Height of Tree: " << s.maxDepth(root);
    return 0;
}