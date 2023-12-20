#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestConsecutive(vector<int>& a) {
        sort(a.begin(),a.end());
        int n = a.size();
        if(n==0){
            return 0;
        }
        int ct = 0;
        int sl = INT_MIN;
        int len = 1;
        
        for(int i = 0;i<n;i++){
            if(a[i]-1==sl){
                ct++;
                sl = a[i];
            }
            else if(a[i]!=sl){
                ct = 1;
                sl =a[i];
            }
            len = max(len,ct);
        }
        return len;
    }
};
int main(){
    Solution s;
    vector<int>nums={100,4,200,1,3,2};
    cout << s.longestConsecutive(nums);
    return 0;
}