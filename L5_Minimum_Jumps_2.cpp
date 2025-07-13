#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//class Solution {
  //public:
  /*
    int solve(int ind, int jump, vector<int> &arr, vector<int> &dp){
        int n = arr.size();

        if(ind==n-1) return dp[ind] = jump;
        if(dp[ind] != -1) return dp[ind];
        
        int min_jmp = 1e9;
        for(int i = 1; i<=arr[ind] && (ind+i)<n; i++)
            min_jmp = min(min_jmp, solve(ind+i, jump+1, arr, dp));
        
        return dp[ind] = min_jmp;
    }
    int minJumps(vector<int>& arr) {
        // code here
        int n = arr.size();
        vector<int> dp(n,-1);
        return solve(0, 0, arr, dp);
    }
    */

   int minJumps(vector<int>& arr) {
        // code here
        int n = arr.size();
        int low = 0, high = 0;
        int jump = 0;

        while(high<n-1){
            int farthest = 0;
            for(int i = low; i<=low+high && i<n; i++){
                farthest = max(farthest,arr[i]);
            }
            low = high+1;
            high = farthest;
            jump++;
        }
    }
//};

int main(){
    int n; cin>>n;
    vector<int> arr(n);
    for(int i = 0; i<n; i++) cin>>arr[i];
    //Solution obj;
    cout<<minJumps(arr);
    return 1;
}