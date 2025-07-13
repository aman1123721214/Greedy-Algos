#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int findPlatform(vector<int>& arr, vector<int>& dep) {
    // Your code here
    int n = arr.size();
    sort(arr.begin(), arr.end());
    sort(dep.begin(), dep.end());

    int i = 0, j = 0;
    int count = 0, maxCount = 0;

    while(i<n){
        if(arr[i]<=dep[j]){
            count++;
            i++;
        }
        else{
            count--;
            j++;
        }
        maxCount = max(maxCount, count);
    }
    return maxCount;
}

int main(){
    int n; cin>>n;
    vector<int> arr(n), dep(n);
    for(int i = 0; i<n; i++) 
        cin>>arr[i]>>dep[i];

    cout<<findPlatform(arr, dep);
    return 0;
}