#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<vector<int>> insertNewEvent(vector<vector<int>> &intervals, vector<int> &newEvent) {
        // code here
        int i = 0, n = intervals.size();

        vector<vector<int>> ans;
        //taking all inetervals whose end_time < newEvent start_time (i.e initial non overlapping intervals)
        while(i<n && (intervals[i][1]<newEvent[0]))
            ans.push_back(intervals[i++]);

        //taking all overlapping intervals
        while(i<n && (intervals[i][0]<=newEvent[1])){
            newEvent[0] = min(newEvent[0], intervals[i][0]);
            newEvent[1] = max(newEvent[1], intervals[i][1]);
            i++;
        }
        ans.push_back(newEvent);

        //taking all final non-overlapping intervals
        while(i<n)
            ans.push_back(intervals[i++]);
        
        return ans;
    }
};

int main(){
    int n; cin>>n;
    vector<vector<int>> interv(n, vector<int> (2));
    vector<int> newEvent(2);

    for(int i = 0; i<n; i++)
        cin>>interv[i][0]>>interv[i][1];
    
    cin>>newEvent[0]>>newEvent[1];

    Solution obj;
    vector<vector<int>> ans = obj.insertNewEvent(interv, newEvent);
    cout<<"ans = "<<endl;
    for(auto it: ans)
        cout<<it[0]<<" "<<it[1]<<endl;

    return 0;
}