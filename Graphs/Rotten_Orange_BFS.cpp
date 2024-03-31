#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        if(grid.empty()) return 0;
        int m = grid.size();
        int n = grid[0].size();
        int total_orange = 0;
        int count =  0;
        int total_time= 0;
        queue <pair<int,int>> rotten;
        for(int i= 0;i<m;i++){
            for(int j= 0;j<n;j++){
                if(grid[i][j]!=0) total_orange++;
                if(grid[i][j]==2) rotten.push({i,j});
            }
        }
        int dx[4] = {0,0,1,-1};
        int dy[4] = {1,-1,0,0};
        while(!rotten.empty()){
            int k = rotten.size();
            count += k;
            while(k--){
                int x = rotten.front().first;
                int y = rotten.front().second;
                rotten.pop();
                for(int i = 0;i<4;i++){
                    int nx = x+dx[i];
                    int ny = y+dy[i];
                    if(nx<0 || ny<0 || nx>=m||ny>=n||grid[nx][ny]!=1) continue;
                    grid[nx][ny] = 2;
                    rotten.push({nx,ny});
                }
            }
            if(!rotten.empty()) total_time++;
        }
        return total_orange==count?total_time:-1;
    }
};
int main(){
    Solution s;
    vector<vector<int>>grid = {{2,1,1},{1,1,0},{0,1,1}};
    cout << "Minimum Time: " << s.orangesRotting(grid);
    return 0;
}