#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool check(vector<int>& nums) {
        int n= nums.size();
        int count = 0;
        for(int i = 1;i<n;i++){
            if(nums[i-1]>nums[i]) count++;  
        }
        if(nums[n-1]>nums[0]){
            count++;
        }
        return count<=1;
    }
};
int main(){
    vector<int>nums {2,1,3,4};
    vector<int>nums1 {3,4,5,6,1,2};
    Solution s;
    cout << s.check(nums) << endl;
    cout << s.check(nums1);
    return 0;
}