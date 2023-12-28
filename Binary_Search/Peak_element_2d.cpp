#include<bits/stdc++.h>
using namespace std; 
void findPeakGrid(vector<vector<int>> &g){
    // Write your code here.   
    vector<int>res(2);
    int n = g.size();
    int m = g[0].size();
    for(int i =0;i<n;i++){
        for(int j = 0;j<m;j++){
            if(i>0){
                if(g[i][j]<g[i-1][j]) 
                    continue;
            }
            if(j<m-1){
                if(g[i][j]<g[i][j+1]) 
                    continue;
            }
            if(i<n-1){
                if(g[i][j]<g[i+1][j]) 
                    continue;
            }
            if(j>0){
                if(g[i][j]<g[i][j-1]) 
                    continue;
            }
            res[0] = i;
            res[1] = j;
            break;
        }
    }
    for(int it:res){
        cout << it << " ";
    }
    
}
int main(){
    vector<vector<int>> g={{1,4},{3,2}};
    findPeakGrid(g);
    return 0;
}