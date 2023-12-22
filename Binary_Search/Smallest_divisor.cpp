#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
   long long sum(vector<int>&nums,int div){
        long long s = 0;
        for(int i= 0;i<nums.size();i++){
            s += ceil(double(nums[i])/double(div));
        }
        return s;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n= nums.size();
        int low = 1;
        int high = *max_element(nums.begin(),nums.end());
        while(low<=high){
            int mid = (low+high)/2;
            if(sum(nums,mid)<=threshold){
                high= mid -1;
            }
            else{
                low = mid + 1;
            }
        }
        return low;
    }
};
int main(){
    Solution s;
    vector<int> v = {8,4,2,3};
    int threshold = 10;
    cout << s.smallestDivisor(v,threshold);
    return 0;
}