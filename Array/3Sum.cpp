#include<bits/stdc++.h>
using namespace std; 
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>>ans;
        if(n<3) return ans;
        sort(nums.begin(),nums.end());
        for(int i = 0;i<n-2;i++){
            if(i==0 || nums[i-1]!= nums[i]){
                int j = i+1;
                int k = n-1;
                int sum =  -nums[i];
                while(j<k){
                    if(nums[j]+nums[k]==sum){
                        ans.push_back({nums[i],nums[j],nums[k]});
                        while(j<k && nums[j]==nums[j+1]){
                            j++;
                        }
                        while(j<k && nums[k] == nums[k-1]){
                            k--;
                        }
                        j++;
                        k--;
                    }
                    else if(nums[j]+nums[k]<sum){
                        j++;
                    }
                    else{
                        k--;
                    }
                }
            }
        }
        return ans;    
    }
};
int main(){
    Solution s;
    vector<int> a= {-1, -1, 2, 0, 1};
    vector<vector<int>>vec = s.threeSum(a);
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 0; j < vec[i].size(); j++)
        {
            cout << vec[i][j] << " "; 
        }
        cout << endl;
    }
    return 0;
}