#include<bits/stdc++.h>
using namespace std;
class Solution {
    private: 
        stack<char>stk;
public:
    bool isValid(string s) {
        int n = s.length();
        for(int i=0;i<n;i++){
            char c = s[i];
            if(c=='(' || c=='[' || c=='{'){
                stk.push(c);
            }
            else{
                if(!stk.empty()){
                    char top = stk.top();
                    if((c==')' && top == '(') || (c=='}' && top == '{') || (c==']' && top == '[')){
                        stk.pop();
                    }
                    else{
                        return false;
                    }
                }    
                else{
                    return false;
                }    
            }
        }
        return stk.empty()?true:false;
    }
};
int main(){
    Solution ss;
    string s = "[()]{}{[()()]()}";
    if(ss.isValid(s)) cout << "balanced" <<  endl;
    else{
        cout << "UNBalances" << endl;
    }
    return 0;
}