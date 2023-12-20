#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& MATRIX) {
    int n = MATRIX.size();
    int m = MATRIX[0].size();
    vector<int>v;
    int top = 0,left = 0,right = m-1,bottom = n-1;
    while(top<=bottom && left<=right){
        for(int i = left;i<=right;i++){
            v.push_back(MATRIX[top][i]);
        }
        top++;
        for(int i = top;i<=bottom;i++){
            v.push_back(MATRIX[i][right]);
        }
        right--;
        if(top<=bottom){
            for(int i = right;i>=left;i--){
                v.push_back(MATRIX[bottom][i]);
            }
            bottom--;
        }
        if(left<=right){
            for(int i = bottom;i>=top;i--){
                v.push_back(MATRIX[i][left]);
            }
            left++;
        }

    }
    return v;
    }
};
int main(){
    Solution s;
    vector<vector<int>>nums={{1,2,3},{4,5,6},{7,8,9}};
    vector<int>n = s.spiralOrder(nums);
    for (int i = 0; i < n.size(); i++) 
    { 
        cout << n[i] << " ";
    } 
    return 0;
    
}