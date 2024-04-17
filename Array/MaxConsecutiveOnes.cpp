#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int n = 0;
        for(int i= 0;i<nums.size();i++){
            if(nums[i]==1){
                n++;
            }
            else{
                count = max(count,n);
                n = 0;
            }
        }
        return max(count,n);
    }
};
int main(){
    vector<int>nums {1,1,0,1,1,1};
    Solution s;
    cout << "Maximum Consecutive Ones : " << s.findMaxConsecutiveOnes(nums);
    return 0;
}