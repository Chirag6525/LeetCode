#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int>res(n,-1);
        stack<int>s;
        for(int i=2 *n -1;i>=0;i--){
            while(!s.empty() && s.top()<=nums[i%n]){
                s.pop();
            }
            if(i<n){
                if(!s.empty()){
                    res[i] = s.top();
                }
            }
            s.push(nums[i%n]);
        }
        return res;
    }
};
int main(){
    Solution s;
    vector<int>a = {1,2,1};
    vector<int>result = s.nextGreaterElements(a);
    for(auto it: result){
        cout << it << " ";
    }
    return 0;
}