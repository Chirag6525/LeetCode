#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void traverse(int node,vector<int>&visited,vector<vector<int>>&isConnected){
        int n = isConnected.size();
        for(int i=0;i<n;i++){
            if(isConnected[node][i] && !visited[i]){
                visited[i] = 1;
                traverse(i,visited,isConnected);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<int>visited(n,0);
        int province =0;
        for(int i= 0;i<n;i++){
            if(visited[i]==0){
                province++;
            }
            traverse(i,visited,isConnected);
        }
        return province;
    }
};
int main(){
    vector<vector<int>> isConnected {{1,1,0},{1,1,0},{0,0,1}};
    Solution s;
    cout << "Number of province: " << s.findCircleNum(isConnected);
    return 0;
}