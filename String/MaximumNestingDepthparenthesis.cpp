#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        int maxDepth(string s){
            int count = 0;
            int maxc = 0;
            for(char c : s){
                if(c=='(') count++;
                else if(c==')') count--;
                maxc = max(maxc,count);
            }
            return maxc;
        }
};
int main(){
    Solution s;
    string str = "(1+(2*3)+((8)/4))+1";
    cout << s.maxDepth(str);
}