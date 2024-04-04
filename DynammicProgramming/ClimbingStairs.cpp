#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int climbStairs(int n) {
        int prev =1;
        int prev1 = 1;
        for(int i=2;i<=n;i++){
            int curi = prev + prev1;
            prev1 =prev;
            prev = curi;
        }
        return prev;
    }
};
int main(){
    Solution s;
    int n = 5;
    cout << "Number of ways to climb stairs till " << n << " : " << s.climbStairs(n);
    return 0;
}