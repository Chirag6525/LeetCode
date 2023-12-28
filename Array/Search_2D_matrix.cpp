#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n= matrix[0].size();
        for(int i= 0;i<m;i++){
            for(int j=0;j<n;j++){
                if(target==matrix[i][j]){
                    return true;
                }
            }
        }
        return false;
    }
};
int main(){
    Solution s;
    vector<vector<int>> m = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target = 30;
    cout << s.searchMatrix(m,target);
    return 0;
}