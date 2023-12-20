#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMin(vector<int>& nums) {
        int min = *min_element(nums.begin(),nums.end());
        return min;
    }
};
int main(){
    Solution s;
    vector<int> v = {3,4,5,1,2};
    cout << s.findMin(v);
    return 0;
}