#include<bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>&arr){
    int n = arr.size();
    bool swapp;
    for (int i = 0; i <n-1;i++){
        swapp = false;
        for (int j = 0; j < n - i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j + 1]);
                swapp = true;
            }
        }
        if(!swapp)
            break;
    }
}

int main(){
    vector<int> arr = {5, 2, 8, 4};
    bubbleSort(arr);
    for(int i: arr)
        cout << i << " ";
    return 0;
}