#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = floor(nums.size()/3);
        vector<int>r;
        map<int,int>m;
        for(int i = 0;i<nums.size();i++){
            m[nums[i]]++;
        }
        for(auto it : m){
            if(it.second>n){
                r.push_back(it.first);
            }
        }
        return r;
    }
};
int main(){
    Solution s;
    vector<int>nums={3,2,3};
    vector<int>v =  s.majorityElement(nums);
    for(int i : v){
        cout << i << " ";
    }
    return 0;
}