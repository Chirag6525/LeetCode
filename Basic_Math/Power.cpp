#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    double myPow(double x, int n) {
       return pow(x,n); 
    }
};
int main(){
    Solution s;
    double  x = 2.10000;
    int n = 3;
    cout << s.myPow(x,n);
    return 0;
}