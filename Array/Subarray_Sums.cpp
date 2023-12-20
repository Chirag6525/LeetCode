#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int>m;
        m[0]=1;
        int sum =0;
        int count = 0;
        for(auto i:nums){
            sum+=i;
            int remove = sum-k;
            count+=m[remove];
            m[sum] += 1;
        }
        return count;
    }
};
int main(){
    Solution s;
    vector<int>nums={1,1,1};
    int k = 2;
    cout << s.subarraySum(nums,k);
    return 0;
}