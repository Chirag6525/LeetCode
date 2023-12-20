#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>m;
        int n;
        for(int i = 0;i<nums.size();i++){
            m[nums[i]]++;
        }
        for(auto it : m){
            if(it.second > nums.size()/2){
                n = it.first;
                break;
            }
        }
        return n;
    }
};
int main(){
    Solution s;
    vector<int>nums={2,2,1};
    cout << s.majorityElement(nums);
    return 0;
}