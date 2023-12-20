#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>v;
        for(int i = 0;i<nums.size();i++){
            for(int j = i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    v.insert(v.end(),i);
                    v.insert(v.end(),j);
                    break;
                }
            }
        }
        return v;
    }
};
int main(){
    Solution s;
    vector<int>nums={2,7,11,15};
    int target = 9;
    vector<int>r = s.twoSum(nums,target);
    for(int it : r){
        cout << it << " ";
    }
    return 0;
}