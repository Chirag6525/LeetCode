#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        next_permutation(nums.begin(),nums.end());
        for(auto it:nums){
            cout << it << " ";
        }
    }
};
int main(){
    Solution s;
    vector<int>nums={1,2,3};
    s.nextPermutation(nums);
    return 0;
}