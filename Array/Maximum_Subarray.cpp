#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int max = INT_MIN;
        int n = nums.size();
        for(int i = 0;i<n;i++){
            sum += nums[i];
            if(max<sum){
                max = sum;
            }
            if(sum<0){
                sum = 0;
            }
        }
        return max;
    }
};
int main(){
    Solution s;
    vector<int>nums={-2,1,-3,4,-1,2,1,-5,4};
    cout << s.maxSubArray(nums);
    return 0;
}