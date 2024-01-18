#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        string remove_Outer_parenthesis(string s){
            int open = 0;
            int close = 0;
            string result = "";
            int start = 0;
            for(int i= 0;i<s.length();i++){
                char c = s[i];
                if(c=='('){
                    open += 1;
                }
                else if(c == ')'){
                    close += 1;
                }
                if(open == close  && open > 0){
                    result += s.substr(start+1,i-start-1);
                    start = i +1;
                    open = 0;
                    close = 0;
                }
            }
            return result;
        }
}; 
int main(){
    Solution s;
    string str = "(()())(())";
    cout << s.remove_Outer_parenthesis(str);

}