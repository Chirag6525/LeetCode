#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int low = 0;
        int high = arr.size()-1;
        while(low<=high){
            int mid = (low+high)/2;
            int missing = arr[mid]-(mid+1);
            if(missing<k){
                low = mid + 1;
            }
            else{
                high = mid-1;
            }
        }
        return high+1+k;
    }
};
int main(){
    Solution s;
    vector<int>v = {2,4,5,7};
    int k = 3;
    cout << s.findKthPositive(v,k);
    return 0;
}