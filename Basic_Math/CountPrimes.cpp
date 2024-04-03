#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countPrimes(int n) {
        if(n<=2) return 0;
        int count= 0;
        vector<int>v(n+1,0);
        for(int i=2;i*i<=n;i++){
            if(v[i]==0){
                for(int j=i*i;j<=n;j+=i){
                    v[j] = 1;
                }
            }
            
        }
        for(int i =2;i<n;i++){
            if(v[i]==0){
                count++;
            }
        }
        return count;
    }
};
int main(){
    Solution s;
    int n= 50;
    cout << "Number of Prime before the number " << n << " is: "<<s.countPrimes(n);
    return 0;
}