#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int>&s){
    for (int i = 0; i < s.size() - 1;i++){
        int min_i = i;
        for (int j = i + 1; j < s.size();j++){
            if(s[j]<s[min_i])
                min_i = j;
        }
        swap(s[min_i], s[i]);
    }
}
int main(){
    vector<int> s = {4, 1, 7, 5, 9};
    selectionSort(s);
    for(int i:s){
        cout << i << " ";
    }
}