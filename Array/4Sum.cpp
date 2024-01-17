#include<bits/stdc++.h>
using namespace std;
#include<bits/stdc++.h>
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        for(int i= 0;i<n-1;i++){
            if(i>0 && nums[i] == nums[i-1]) continue;
            for(int j = i+1;j<n-1;j++){
                if(j>i+1 && nums[j]==nums[j-1]) continue;
                int k = j+1;
                int l = n-1;
                while(k<l){
                    long long sum = nums[i];
                    sum = sum+nums[j]+nums[k]+nums[l];
                    if(sum==target){
                        vector<int>temp{nums[i],nums[j],nums[k],nums[l]};
                        ans.push_back(temp);
                        k++;
                        l--;
                        while(k<l && nums[k]==nums[k-1])k++;
                        while(k<l && nums[l]==nums[l+1])l--;
                    }
                    else if(sum < target) k++;
                    else l--;
                }
            }
        }
        return ans;
    }
};
int main(){
    Solution s;
    vector<int> a= {1,0,-1,0,-2,2};
    int target = 0;
    vector<vector<int>>vec = s.fourSum(a,target);
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