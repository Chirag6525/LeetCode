#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        vector<int>res(n1,-1);
        for(int i=0;i<n1;i++){
            int x = nums1[i];
            for(int j=0;j<n2;j++){
                    int t = nums2[j];
                    if(x==t && j==n2-1){
                        break;
                    }
                    else if(x==t){
                        for(int k = j+1;k<n2;k++){
                            if(nums2[k]>t){
                                res[i] = nums2[k];
                                break;
                            }
                        }
                    }
            }
            
        }
        return res;
    }
};
int main(){
    Solution s;
    vector<int>a1 = {4,1,2};
    vector<int>a2 = {1,3,4,2};
    vector<int>result =s.nextGreaterElement(a1,a2);
    for(auto it:result){
        cout << it << " ";
    }
    return 0;
}