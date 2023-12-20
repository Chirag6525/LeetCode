#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i= 0;i<nums.size();i++){
            if(i != nums[i]){
                return i;
            }
        }
        return nums.size();
    }
    
};
int main(){
    Solution s;
    vector<int>nums={0,1};
    cout << s.missingNumber(nums);
    return 0;
}