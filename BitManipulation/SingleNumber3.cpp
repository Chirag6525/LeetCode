#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long xorr = nums[0];
        for(int i = 1;i<nums.size();i++){
            xorr = xorr ^ nums[i];
        }
        int b1= 0;
        int b2 = 0;
        int rightmost = (xorr & xorr-1) ^ xorr;
        for(int i= 0;i<nums.size();i++){
            if(nums[i]&rightmost){
                b1 = b1 ^ nums[i];
            }
            else{
                b2 = b2 ^ nums[i];
            }
        }
        return {b1,b2};
    }
};
int main(){
    Solution s;
    vector<int>nums{1,2,3,4,2,3,1,5};
    vector<int>result =  s.singleNumber(nums);
    for(auto it: result){
        cout << it << " ";
    }
    return 0;

}