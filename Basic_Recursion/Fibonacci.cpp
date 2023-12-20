#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int fib(int n) {
        if(n<=1){
            return n;
        }
        return fib(n-1)+fib(n-2);
    }
};
int main(){
    Solution s;
    int x = 2;
    cout << s.fib(x);
    return 0;
}