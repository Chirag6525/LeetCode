#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool possible(vector<int>&bloomDay,int day,int m,int k){
        int cnt = 0;
        int bouq = 0;
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]<=day){
                cnt++;
            }
            else{
                bouq += (cnt/k);
                cnt = 0;
            }
        }
        bouq += (cnt/k);
        return bouq>=m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        long long t = (long)m * k;
        if(t>n) return -1;
        int min = *min_element(bloomDay.begin(),bloomDay.end());
        int max = *max_element(bloomDay.begin(),bloomDay.end());
        int low = min;
        int high = max;
        while(low<=high){
            int mid = (low+high)/2;
            if(possible(bloomDay,mid,m,k)){
                high = mid-1;
            }
            else{
                low = mid + 1;
            }
        }
        return low;
    }
};
int main(){
    Solution s;
    vector<int>v = {1,2,1,2,7,2,2,3,1};
    int m = 2;
    int k = 3;
    cout << s.minDays(v,m,k);
    return 0;
}