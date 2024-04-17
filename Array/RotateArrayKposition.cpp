#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void rotate(vector<int>& arr, int k) {
        vector<int> r;
        int n = arr.size();
        if(n<k) k = k%n;
        int a = k;
        for(int i = n-1;k>0;i--){
            r.insert(r.begin(),arr[i]);
            k--;
        }
        for(int i = 0;i<n-a;i++){
            r.push_back(arr[i]);
        }
        arr.clear();
        for(auto it:r){
            arr.push_back(it);
        }
    }
};
int main(){
    vector<int> arr = {1,2,3,4,5,6,7};
    Solution s;
    int k = 3;
    s.rotate(arr,k);
    for(auto it:arr){
        cout << it << " ";
    }
    return 0;
}