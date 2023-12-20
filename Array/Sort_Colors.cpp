#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int n0 = 0,n1= 0 ,n2 = 0;
        for(int i = 0;i<n;i++){
            if(nums[i]==0){
                n0++;
            }
            else if(nums[i] == 1){
                n1++;
            }
            else{
                n2++;
            }
        }
        for(int i = 0;i<n0;i++){
            nums[i] = 0;
        }
        for(int i = n0;i<n0+n1;i++){
            nums[i] = 1;
        }
        for(int i = n0+n1;i<n;i++){
            nums[i] = 2;
        }
    }
};
int main(){
    Solution s;
    vector<int>nums={2,0,2,1,1,0};
    s.sortColors(nums);
    for(int it : nums){
        cout << it << " ";
    }
    return 0;
}