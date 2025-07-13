#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    long long solve(vector<int>& bt) {
        // code here
        long long time = 0, sum = 0; 
        sort(bt.begin(), bt.end());
        for(int i = 1; i<bt.size(); i++){
            time+=bt[i-1];
            sum+=time;
        }

        return sum/bt.size();
    }
};

int main(){
    int n; cin>>n;
    vector<int> bt(n);
    for(int i = 0; i<n; i++) cin>>bt[i];
    Solution obj;
    cout<<obj.solve(bt);
    return 1;
}