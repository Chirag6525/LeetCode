#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        for(int i=0;i<s.length();i++){
            s[i] = tolower(s[i]);
        }
        string t="";
        for(char c : s){
            if(isalnum(c)){
                t+=c;
            }
        }
        int n = t.length();
        for(int i=0;i<n/2;i++){
            if(t[i]!=t[n-i-1]){
                return false;
            }
        }
        return true;
    }
};
int main(){
    Solution s;
    string x = "A man, a plan, a canal: Panama";
    cout << s.isPalindrome(x);
    return 0;
}