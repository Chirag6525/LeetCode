#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size()-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]>target){
                high =mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return -1;
    }
};
int main(){
    Solution s;
    vector<int>v ={-1,0,3,5,9,12};
    int target = 9;
    cout << s.search(v,target);
    return 0;
}