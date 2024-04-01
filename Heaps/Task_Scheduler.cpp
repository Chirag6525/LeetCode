#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char,int>mp;
        for(char c:tasks){
            mp[c]++;
        }
        priority_queue<int>pq;
        for(auto it:mp){
            pq.push(it.second);
        }
        int total = 0;
        while(!pq.empty()){
            int time= 0;
            vector<int>temp;
            for(int i=0;i<=n;i++){
                if(!pq.empty()){
                    temp.push_back(pq.top()-1);
                    pq.pop();
                    time++;
                }
            }
            for(auto it:temp){
                if(it) pq.push(it);
            }
            total += pq.empty()?time:n+1;
        }
        return total;
    }
};
int main(){
    Solution s;
    vector<char> tasks {'A','A','A','B','B','B'};
    int n= 2;
    cout << "Total time: " << s.leastInterval(tasks,n);
    return 0;

}