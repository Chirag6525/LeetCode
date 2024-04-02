#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        int subset = 1 << n;
        vector<vector<int>> result;
        for(int num =0;num<subset;num++){
            vector<int>temp;
            for(int i=0;i<n;i++){
                if(num&(1<<i)){
                    temp.push_back(nums[i]);
                }
            }
            result.push_back(temp);
        }
        return result;
    }
};
int main(){
    Solution s;
    vector<int> nums {1,2,3};
    vector<vector<int>>result;
    result = s.subsets(nums);
    for(int i=0;i<result.size();i++){
        for(int j = 0;j<result[i].size();j++){
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}