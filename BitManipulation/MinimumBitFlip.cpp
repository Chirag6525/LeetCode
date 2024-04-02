#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minBitFlips(int start, int goal) {
        int ans = start^goal;
        int count=0;
        for(int i=0;i<=31;i++){
            if(ans&(1<<i)) count++;
        }
        return count;
    }
};
int main(){
    Solution s;
    int start = 10;
    int goal = 7;
    cout << "Minimum Flip Required:" << s.minBitFlips(start,goal);
    return 0;
}