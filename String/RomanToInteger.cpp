#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int val(char s){
        int v = 0;
        if(s=='I') v = 1;
        else if(s=='V') v = 5;
        else if(s=='X') v = 10;
        else if(s=='L') v = 50;
        else if(s=='C') v = 100;
        else if(s=='D') v = 500;
        else if(s=='M') v = 1000;
        return v;
    }
    int romanToInt(string s) {
        int res = 0;
        for(int i =0;i<s.size();i++){
            if(val(s[i])>=val(s[i+1])){
                res += val(s[i]);
            }
            else{
                res -= val(s[i]);
            }
        }    
        return res;
    }
};
int main(){
    Solution s;
    string roman = "XII";
    cout << s.romanToInt(roman);
    return 0;
}