#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[], int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void bfs(vector<int> adj[], int V, int start){
    vector<bool> visited(V, false);
    queue<int> q;
    visited[start] = true;
    q.push(start);
    while(!q.empty()){
        int node = q.front();
        q.pop();
        cout << node << " ";
        for(int neighbor : adj[node]){
            if(!visited[neighbor]){
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
}

int main(){
    int V = 6;
    vector<int> adj[V];
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 2, 4);
    addEdge(adj, 3, 5);
    addEdge(adj, 4, 5);
    bfs(adj, V, 0);
    return 0;
}