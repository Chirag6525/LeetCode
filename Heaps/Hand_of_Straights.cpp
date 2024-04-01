#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int n= hand.size();
        if(n%groupSize) return false;
        map<int,int>mp;
        for(auto it:hand){
            mp[it]++;
        }
        for(auto it=mp.begin();it!=mp.end();){
            if(it->second>0){
                for(int i=0;i<groupSize;i++){
                    if(mp[it->first+i]>0){
                        mp[it->first+i]--;
                    }
                    else return false;
                }
            }
            else it++;
        }
        return true;
    }
};
int main(){
    Solution s;
    int group = 3;
    vector<int>cards{1,2,3,6,2,3,4,7,8};
    cout << s.isNStraightHand(cards,group);
    return 0;
}