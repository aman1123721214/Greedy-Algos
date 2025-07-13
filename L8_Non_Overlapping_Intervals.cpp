#include<iostream>
#include<bits/stdc++.h>
using namespace std;

static bool comp(vector<int>& intervals1, vector<int>& intervals2){
    return (intervals1[0]<intervals2[1]);
}

int eraseOverlapIntervals(vector<vector<int>>& intervals) {
    sort(intervals.begin(), intervals.end(), comp);
    int count = 1;
    int lastTime = intervals[0][1];
    for(int i = 1; i<intervals.size(); i++){
        if(intervals[i][0]>=lastTime){
           count++;
           lastTime = intervals[i][1]; 
        }
    }
    return intervals.size()-count;
}

int main(){
    int n; cin>>n;
    vector<vector<int>> intervals(n, vector<int> (2));

    for(int i = 0; i<n; i++)
        cin>>intervals[i][0]>>intervals[i][1];
    
    cout<<eraseOverlapIntervals(intervals);
    return 0;

}

/*
[[-52,31]
[-73,-26]
[82,97]
[-65,-11]
[-62,-49]
[95,99]
[58,95]
[-31,49]
[66,98]
[-63,2]
[30,47]
[-40,-26]]

12
-52 31
-73 -26
82 97
-65 -11
-62 -49
95 99
58 95
-31 49
66 98
-63 2
30 47
-40 -26
-73 -26
-65 -11
-63 2
-62 -49
-52 31
-40 -26
*/