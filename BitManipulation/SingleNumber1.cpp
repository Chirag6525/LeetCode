#include<bits/stdc++.h>
using namespace std;
#include<algorithm>
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int x = nums[0];
        for(int i=1;i<nums.size();i++){
            x =x^nums[i];
        }
        return x;
    }
};
int main(){
    Solution s;
    vector<int>nums{2,2,5,6,5};
    cout << "The Number appearing once is: " << s.singleNumber(nums);
    return 0;
}
