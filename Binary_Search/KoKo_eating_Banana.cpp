#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxE(vector<int> &piles){
        int max = piles[0];
        for(int i = 0;i <piles.size();i++){
            if(piles[i]>=max){
                max = piles[i];
            }
        }
        return max;
    }
    long long int sum(vector<int>&piles, int a){
        long long int sum = 0;
        for(int i= 0;i<piles.size();i++){
            sum += ceil(double(piles[i])/double(a));
        }
        return sum;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int low = 1;
        int high = maxE(piles);
        while(low<=high){
            int mid = (low+high)/2;
            if(sum(piles,mid)<=h){
                high = mid -1;
            }
            else{
                low = mid +1;
            }
        }
        return low;
    }
};
int main(){
    Solution s;
    vector<int>v = {25,12,8,14,19};
    int hours = 5;
    cout << s.minEatingSpeed(v,hours);
    return 0;
}