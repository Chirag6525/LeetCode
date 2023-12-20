#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void merge(vector<int>& a,int l,int m,int h){
        int i = l;
        int j = m+1;
        vector<int>c;
        while(i<=m && j<=h){
            if(a[i]<=a[j]){
                c.push_back(a[i++]);
            }
            else{
                c.push_back(a[j++]);
            }
        }
        while(i<=m){
            c.push_back(a[i++]);
        }
        while(j<=h){
            c.push_back(a[j++]);
        }
        for(int i =l;i<=h;i++){
            a[i]=c[i-l];
        }
    }
    int cntpair(vector<int>& a,int l,int m,int h){
        int cnt = 0;
        int high = m+1;
        for(int i = l;i<=m;i++){
            while(high<=h && a[i]>2*(long)a[high]){
                high++;
            }
            cnt += (high - (m +1));
        }
        return cnt;
    }
    int mergeSort(vector<int>&a,int l,int h){
        int cnt = 0;
        if(l>=h){
            return cnt;
        }
        int mid = (l+h)/2;
        cnt += mergeSort(a,l,mid);
        cnt += mergeSort(a,mid+1,h);
        cnt += cntpair(a,l,mid,h);
        merge(a,l,mid,h);
        return cnt;
    }
    int reversePairs(vector<int>& a) {
        int n =a.size();
        return mergeSort(a,0,n-1);
    }
};
int main(){
    Solution s;
    vector<int>nums={1,3,2,3,1};
    cout << s.reversePairs(nums);
    return 0;
}