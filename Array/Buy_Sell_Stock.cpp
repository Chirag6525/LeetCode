#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxpro = 0;
        int minprice = INT_MAX;
        for(int i = 0;i<n;i++){
            minprice = min(minprice,prices[i]);
            maxpro = max(maxpro,prices[i]-minprice);
        }
        return maxpro;
    }
};
int main(){
    Solution s;
    vector<int>nums={7,1,5,3,6,4};
    cout << s.maxProfit(nums);
    return 0;
}