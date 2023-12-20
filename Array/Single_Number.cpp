#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i = 0;
        while(i < nums.size()-1){
            if(nums[i]==nums[i+1]){
                i+=2;
            }
            else{
                return nums[i];
            }
        }
        return nums[nums.size()-1];
    }
};
int main(){
    Solution s;
    vector<int>nums={2,2,1};
    cout << s.singleNumber(nums);
    return 0;
}