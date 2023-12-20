#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int reverse(int x) {
        int rem = 0;
        long rev = 0;
        while(x!=0){
            rem = x%10;
            rev = rev*10+rem;
            x = x/10;
        }
        if(rev < pow(-2,31) | rev > pow(2,31)-1){
            return 0;
        }
        return rev;
        
    }
};
int main(){
    Solution s;
    int x = 123;
    cout << s.reverse(x);
    return 0;
}