#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        vector<vector<int>> mergeIntervals(vector<vector<int>>intervals){
            int n= intervals.size();
            vector<vector<int>>ans;
            sort(intervals.begin(),intervals.end());
            for(int i =0;i<n;i++){
                if(ans.empty() || intervals[i][0] > ans.back()[1]){
                    ans.push_back(intervals[i]);
                }
                else{
                    ans.back()[1] = max(ans.back()[1],intervals[i][1]);
                }
            }
            return ans;
        }
};

int main(){
    Solution s;
    vector<vector<int>>v{{1,3},{2,6},{8,10},{15,18}};
    vector<vector<int>>vec = s.mergeIntervals(v);
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