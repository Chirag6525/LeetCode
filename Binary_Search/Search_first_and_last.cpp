#include<bits/stdc++.h>
using namespace std;
#include<vector>
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>p;
        int low = 0;
        int high = nums.size()-1;
        int first = -1;
        int last =-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]==target){
                first = mid;
                high = mid -1;
            }
            else if(nums[mid]>target){
                high = mid -1;
            }
            else if(nums[mid]<target){
                low = mid +1;
            }
        }
        p.insert(p.end(),first);
        int l = 0;
        int h = nums.size()-1;
        while(l<=h){
            int m = (l+h)/2;
            if(nums[m]==target){
                last =m;
                l = m+1;
            }
            else if(nums[m]>target){
                h = m-1;
            }
            else if(nums[m]<target){
                l = m+1;
            }
        }
        p.insert(p.end(),last);
        return p;
    }
};
int main(){
    Solution s;
    int target = 8;
    vector<int>v = {5,7,7,8,8,10};
    vector<int>nums =  s.searchRange(v,target);
    for (int i : nums){
        cout << i << " ";
    }
    return 0;
}