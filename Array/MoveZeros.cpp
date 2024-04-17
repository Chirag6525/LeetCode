#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int l= nums.size();
        vector<int>n;
        int i = 0;
        int count = 0;
        while(i<l){
            if(nums[i]!=0){
                n.push_back(nums[i]);
            }
            else{
                count++;
            }
            i++;
        }
        n.insert(n.end(),count,0);
        for(int i = 0;i<l;i++){
            nums[i] = n[i];            
        }
    }
};
int main(){
    vector<int>nums {0,1,0,3,12};
    Solution s;
    s.moveZeroes(nums);
    for(auto it : nums){
        cout << it << " ";
    }
    return 0;
}