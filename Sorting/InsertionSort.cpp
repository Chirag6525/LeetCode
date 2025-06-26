#include<bits/stdc++.h>
using namespace std;

void InsertionSort(vector<int>&arr){
    int n = arr.size();
    for (int i = 0; i < n;i++){
        int j = i;
        while(j>0&& arr[j-1]>arr[j]){
            swap(arr[j - 1], arr[j]);
            j--;
        }
    }
}

int main(){
    vector<int> arr = {5, 2, 8, 4};
    InsertionSort(arr);
    for(int i: arr)
        cout << i << " ";
    return 0;
}