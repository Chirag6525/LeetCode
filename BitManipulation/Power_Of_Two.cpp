#include<bits/stdc++.h>
using namespace std;
bool isPowerOfTwo(int n){
    return (n > 0 && !(n&(n-1)));
}
int main(){
    int n = 64;
    cout << isPowerOfTwo(n);
}