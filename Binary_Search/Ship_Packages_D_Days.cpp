#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int all_sum(vector<int>&weights){
        int s =0;
        for(int it:weights){
            s += it;
        }
        return s;
    }
    int day(vector<int>&weights,int cap){
        int days = 1;
        int load = 0;
        int n = weights.size();
        for(int i =0;i<n;i++){
            if(load+weights[i]>cap){
                days += 1;
                load = weights[i];
            }
            else{
                load += weights[i];
            }
        }
        return days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(),weights.end());
        int high = all_sum(weights);
        while(low<=high){
            int mid = (low+high)/2;
            int d = day(weights,mid);
            if(d<=days){
                high = mid -1;
            }
            else{
                low= mid + 1;
            }
        }
        return low;
    }
};
int main(){
    Solution s;
    vector<int>v = {3,2,2,4,1,4};
    int days = 3;
    cout << s.shipWithinDays(v,days);
    return 0;
}