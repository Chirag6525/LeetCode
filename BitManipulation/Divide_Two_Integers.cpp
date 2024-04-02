#include<bits/stdc++.h>
using namespace std;
#include<bits/stdc++.h>
class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend==divisor) return 1;
        if(dividend==INT_MIN && divisor==-1) return INT_MAX;
        if(dividend==INT_MIN && divisor==1) return INT_MIN;
        bool sign = true;
        if(dividend>=0 && divisor < 0) sign = false;
        if(dividend < 0 && divisor > 0) sign = false;
        long int n = abs(dividend);
        long int d =abs(divisor);
        
        int ans= 0;
        while(n>=d){
            long int count = 1,mul=d;
            while(mul<=n-mul){
                mul+=mul;
                count+=count;
            }
            ans += count;
            n = n - mul;
        }
        if(ans>INT_MAX && sign == true) return INT_MAX;
        if(ans > INT_MAX  && sign == false) return INT_MIN;
        return sign?ans:(-1*ans);
    }
};
int main(){
    Solution s;
    int Dividend = 22;
    int Divisor = 3;
    cout << "Dividend: " << Dividend << endl << "Divisor: " << Divisor << endl << "Quotient: "<<s.divide(Dividend,Divisor);
    return 0;
}