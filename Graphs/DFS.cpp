#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<int>adj[],int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void dfs(vector<int>adj[], int V,int start){
    vector<bool> visited(V, false);
    stack<int> st;
    st.push(start);
    visited[start] = true;

    while(!st.empty()){
        int node = st.top();
        st.pop();
        cout << node << " ";
        for(int neighbor: adj[node]){
            if(!visited[neighbor]){
                visited[neighbor] = true;
                st.push(neighbor);
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
    dfs(adj, V, 0);
    return 0;
}