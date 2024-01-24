#include<bits/stdc++.h>
using namespace std;
class Solution{
    public: 
        static compare(pair<char,int>a,pair<char,int>b){
            return a.second > b.second;
        }
        string characterFrequency(string s){
            string ans ="";
            map<char,int>m;
            for(char c : s){
                m[c]++;
            }
            vector<pair<char,int>>ch(m.begin(),m.end());
            sort(ch.begin(),ch.end(),compare);
            for(auto it : ch){
                ans += string(it.second,it.first);
            }
            return ans;
        }
};
int main(){
    Solution s;
    string str  = "baAb";
    string res = s.characterFrequency(str);
    cout << res;
    return 0;
}