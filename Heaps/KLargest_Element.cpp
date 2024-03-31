#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size();
        priority_queue<int>pq;
        for(int i=0;i<n;i++){
            pq.push(nums[i]);
        }
        int f = k-1;
        while(f>0){
            pq.pop();
            f--;
        }
        return pq.top();
    }
};
int main(){
    Solution s;
    vector<int>nums {3,2,1,5,6,4};
    int k =2;
    cout << k << " largest number: " << s.findKthLargest(nums,k);
    return 0;
}