#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int myAtoi(string s) {
        long long sum = 0,i =0;
        int flag = 1;
        while(s[i]==32){
            i++;
        }
        if(s[i]=='-'){
            flag = -1;
            i++;
        }
        else if(s[i]=='+'){
            flag = 1;
            i++;
        }
        for(i;i<s.size();i++){
            if(s[i]>57||s[i]<48){
                break;
            }
            sum *= 10;
            sum += s[i]-48;
            if(sum>INT_MAX){
                if(flag==1) return sum = INT_MAX;
                else return sum = INT_MIN;
            }
        }
        return sum*flag;

    }
};
int main(){
    Solution s;
    string str = " +9743764253581200415067431L";
    cout << s.myAtoi(str);
    return 0;
}