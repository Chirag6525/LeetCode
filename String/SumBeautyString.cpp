#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        int sumBeauty(string s){
            int ans = 0;
            int n = s.size();
            for(int i = 0;i<n;i++){
                unordered_map<char,int>m;
                for(int j = i;j<n;j++){
                    m[s[j]]++;
                    int maxi = INT_MIN;
                    int mini = INT_MAX;
                    for(auto it : m){
                        maxi = max(maxi,it.second);
                        mini = min(mini,it.second);
                    }
                    ans += (maxi-mini);
                }
                
            }
            return ans;
        }
};
int main(){
    Solution s;
    string str = "aabcb";
    cout << s.sumBeauty(str);
    return 0;
} 