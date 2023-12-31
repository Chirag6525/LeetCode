#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans = INT_MIN;
        int pre = 1;
        int suff =1;
        int n = nums.size();
        for(int i = 0;i<n;i++){
            if(pre==0){
                pre = 1;
            }
            if(suff==0){
                suff =1;
            }
            pre *= nums[i];
            suff *= nums[n-i-1];
            ans = max(ans,max(pre,suff));
        }
        return ans;
    }
};

int main(){
    Solution s;
    vector<int>nums={2,3,-2,4};
    cout << s.maxProduct(nums);
    return 0;
}