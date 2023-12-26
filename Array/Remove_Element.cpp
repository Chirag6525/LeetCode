#include<bits/stdc++.h>
using namespace std;    
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int>v;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]!=val){
                v.push_back(nums[i]);
            }
        }
        nums.clear();
        for(int it:v){
            nums.push_back(it);
        }
        return nums.size();
    }
};
int main(){
    Solution s;
    vector<int>nums = {0,1,1,2,3,4,5,5,3,4,2,3};
    int val = 2;
    cout<<"After Removing "<< s.removeElement(nums,val)<< " values of "<< val << endl;
    for(auto it : nums){
        cout << it << " ";
    }
    return 0;
    
}