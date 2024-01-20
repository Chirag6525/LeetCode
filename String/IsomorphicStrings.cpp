#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int a = s.length();
        int b= t.length();
        unordered_map<char,char>m;
        for(int i = 0;i<a;i++){
            if(m.count(s[i])){
                if(m[s[i]]!=t[i]){
                    return false;
                }
            }
            else{
                vector<char>temp;
                for(auto it:m){
                    temp.push_back(it.second);
                }
                if(find(temp.begin(),temp.end(),t[i])!=temp.end()){
                    return false;
                }
                else{
                    m[s[i]] = t[i];
                }
            }
        }
        return true;
    }
};
int main(){
    Solution s;
    string str1 = "egg";
    string str2 = "odd";
    cout << s.isIsomorphic(str1,str2);
    return 0;
}