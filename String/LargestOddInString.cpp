#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        string largestOdd(string str){
            int n = str.size();
            for(int i = n-1;i>=0;i--){
                if((str[i]-'0')%2==1){
                    return str.substr(0,i+1);
                }
            }
            return "";
        }
};
int main(){
    Solution s;
    string str = "239537672423884969653287101";
    cout << s.largestOdd(str);
    return 0;
}