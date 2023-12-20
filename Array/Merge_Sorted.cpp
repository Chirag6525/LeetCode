#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>v(m+n);
        int l =0,r = 0,i = 0;
        while(l<m && r<n){
            if(nums1[l]<=nums2[r]){
                v[i]=nums1[l];
                i++;
                l++;
            }
            else{
                v[i++] = nums2[r++];
            }
        }
        while(l<m){
            v[i++]=nums1[l++];
        }
        while(r<n){
            v[i++] = nums2[r++];
        }
        for(int i = 0;i<m+n;i++){
            nums1[i] = v[i];
        }
    }    
};
int main(){
    Solution s;
    vector<int>nums1={1,2,3,0,0,0};
    vector<int>nums2={2,5,6};
    int m = 3;
    int n = 3;
    s.merge(nums1,m,nums2,n);
    for(int i : nums1){
        cout << i << " ";
    }
    return 0;
}