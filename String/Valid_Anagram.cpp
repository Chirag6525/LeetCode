#include<bits/stdc++.h>
using namespace std; 
class Solution {
public:
    bool isAnagram(string t1, string t2) {
        int n1= t1.length();
        int n2 = t2.length();
        if(n1!=n2){
            return false;
        }
        sort(t1.begin(),t1.end());
        sort(t2.begin(),t2.end());
        for(int i= 0;i<n1;i++){
            if(t1[i]!=t2[i]){
                return false;
            }
        }
        return true;
    }
};
int main(){
    Solution s;
    string t1 = "anagram";
    string t2 = "nagaram";
    cout << s.isAnagram(t1,t2);
    return 0;

}