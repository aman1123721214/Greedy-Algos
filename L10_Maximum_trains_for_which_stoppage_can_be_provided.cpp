#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
private: 
static bool comp(vector<int> &a, vector<int> &b){
    if(a[1] == b[1])
        return a[3]<b[3];
    return a[1]<b[1];
}
  public:
  // n = pf#    m = train#
    int maxStop(int n, int m, vector<vector<int>> &trains) {
        // code here
        //if departure time is same then 
        //take the one with with lower index
        for(int i = 0; i<m; i++)
            trains[i].push_back(i);
        sort(trains.begin(), trains.end(), comp);

        //mpp[pfn] = {dt}
        int count = 0;
        int mpp[m+1] = {0};

        for(int i = 0; i<m; i++){
            int id = trains[i][2];
            if(trains[i][0]>=mpp[id]){
                count++;
                mpp[id] = trains[i][1];
            }
        }
        return count;
    }
};

// n = pf#      m = trains#
int main(){
    int n, m; cin>>n>>m;
    vector<vector<int>> trains(m, vector<int> (3));

    //{at, dt, pf#}    
    for(int i = 0; i<m; i++)
        cin>>trains[i][0]>>trains[i][1]>>trains[i][2];
    
    Solution obj;
    cout<<"*******************************************************"<<endl;
    cout<<obj.maxStop(n, m, trains);

    return 0;
}