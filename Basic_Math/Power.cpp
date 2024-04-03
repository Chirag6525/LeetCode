#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    double myPow(double x, int n) {
        long long b = n;
        if(x==1) return double(1);
        if(b<0){
            x=1/x;
            b=-b;
        }
        double ans = 1.0;
        while(b>0){
            if(b%2==1){
                ans = ans*x;
            }
            x =x*x;
            b = b/2;
        }
        return ans;
    //    return pow(x,n); 
    }
};
int main(){
    Solution s;
    double  x = 2.10000;
    int n = 3;
    cout << s.myPow(x,n);
    return 0;
}