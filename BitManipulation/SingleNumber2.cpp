#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        // for(int i=1;i<nums.size()-1;i=i+3){
        //     if(nums[i]!=nums[i-1]) return nums[i-1];
        // }
        // return nums[nums.size()-1];
        int ans = 0;
        for(int i=0;i<=31;i++){
            int count = 0;
            for(int j= 0;j<nums.size();j++){
                if(nums[j]&(1<<i)){
                    count++;
                }
            }
            if(count%3==1){
                ans = ans|(1<<i);
            }
        }
        return ans;
    }
};
int main(){
    Solution s;
    vector<int> nums{2,2,2,4,5,6,5,5,6,6};
    cout << "The Number appearing once : " << s.singleNumber(nums);
    return 0;
}