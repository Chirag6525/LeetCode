#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool search(vector<int>& nums, int target) {
        for(int i = 0;i<nums.size();i++){
            if(nums[i]==target){
                return true;
            }
        }
        return false;
    }
};
int main(){
    Solution s;
    int target = 0;
    vector<int>v = {2,5,6,0,0,1,2};
    cout << s.search(v,target);
    return 0;
}