#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for(int i = 0;i<n;i++){
            for(int j =0;j<i;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i = 0;i<n;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};
int main(){
    Solution s;
    vector<vector<int>>nums={{1,2,3},{4,5,6},{7,8,9}};
    s.rotate(nums);
    for (int i = 0; i < nums.size(); i++) 
    { 
        for (int j = 0; j < nums[i].size(); j++) 
        { 
            cout << nums[i][j] << " "; 
        }     
        cout << endl; 
    } 
    return 0;
    
}