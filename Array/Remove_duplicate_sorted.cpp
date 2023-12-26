#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>s;
        for(int i = 0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        int k = s.size();
        nums.clear();
        for(int it: s){
            nums.push_back(it);
        }
        return k;
    }
};
int main(){
    Solution s;
    vector<int>v = {0,0,1,1,1,2,2,3,3,4};
    cout << "After Removing Duplicates";
    cout << "\nNumber of Duplicates : " << s.removeDuplicates(v) << endl;
    for(int it : v){
        cout << it << " ";
    }
    return 0;

}