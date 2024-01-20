#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        int i = s.size()-1;
        string ans;
        while(i>=0){
            while(s[i]==' ' && i>=0){
                i--;
            }
            int j = i;
            while(s[i]!=' ' && i>=0){
                i--;
            }
            if(ans.empty()){
                for(int k = i+1;k<j+1;k++){
                    ans.push_back(s[k]);
                }
            }
            else{
                ans.push_back(' ');
                for(int k = i+1;k<j+1;k++){
                    ans.push_back(s[k]);
                }
            }
        } 
        return ans;
    }
};
int main(){
    Solution s;
    string str = "   the sky is     blue   ";
    string res = s.reverseWords(str);
    for(int i =0;i<res.length();i++){
        cout << res[i];
    }
    return 0;
}