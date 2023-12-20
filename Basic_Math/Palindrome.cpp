#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(int n) {
        int a = n;
        long p = 0;
        if(n<0){
            return false;
        }
        while(n!=0){
            int r = n%10;
            p = p*10+r;
            n /=10;
        }
        if(a==p){
            return true;
        }
        else{
            return false;
        }
    }
};
int main(){
    Solution s;
    int x = 121;
    cout << s.isPalindrome(x);
    return 0;
}