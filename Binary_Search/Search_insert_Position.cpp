#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size()-1;
        int ans = nums.size();
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]>=target){
                ans =mid;
                high = mid-1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }
};
int main(){
    Solution s;
    int target = 5;
    vector<int>v = {1,3,5,6};
    cout << s.searchInsert(v,target);
    return 0;
}