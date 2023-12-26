#include<bits/stdc++.h>
using namespace std; 
class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        int cnt = 0;
        int i = n-1;
        while(s[i]==' '){
            i--;
        }
        while(i>=0){
            if(s[i]==' '){
                break;
            }
            else{
                cnt++;
                i--;
            }
        }
        return cnt;
    }
};
int main(){
    Solution s;
    string sentence = "   fly me   to   the moon  ";
    cout << "Length of last word: " << s.lengthOfLastWord(sentence);
    return 0;
}