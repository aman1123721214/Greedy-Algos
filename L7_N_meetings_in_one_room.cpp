// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
/**************************************************** METHOD -1****************************************************** */
// int maxMeetings(vector<int> start, vector<int> end) {
//     // Your code here
//     int n = start.size();
//     vector<pair<int, int>> meetings(n);
//     for(int i = 0; i<n; i++){
//         int endTime = end[i];
//         int startTime = start[i];
//         meetings.push_back({endTime, startTime});
//     }

//     sort(meetings.begin(), meetings.end());
//     int meetingCount = 1;
//     int lastTime = meetings[0].first;

//     for(int i = 1; i<meetings.size(); i++){
//         int startTime = meetings[i].second;
//         int endTime = meetings[i].first;
        
//         if(startTime>lastTime){
//             lastTime = endTime;
//             meetingCount++;
//         }
//     }
//     return meetingCount-1;
// }

/******************************************************* METHOD -2******************************************************** */

// int maxMeetings(vector<int> start, vector<int> end) {
//         // Your code here
//     int n = start.size();
//     vector<pair<int, int>> meetings;
//     int maxTime = 0;
//     for(int i = 0; i<n; i++){
//         int endTime = end[i];
//         int startTime = start[i];
//         meetings.push_back({endTime, startTime});

//         maxTime = max(maxTime, endTime);
//     }

//     sort(meetings.begin(), meetings.end());
//     vector<int> timeHash(maxTime+1, -1);
//     int meetingCount = 0;

//     for(auto it: meetings){
//         int startTime = it.second;
//         int endTime = it.first;
//         bool flag = 0;

//         for(int j = startTime; j<=endTime; j++){
//             if(timeHash[j] != -1){
//                 flag = 1;
//                 break;
//             }
//         }
//         if(!flag){
//             for(int j = startTime; j<=endTime; j++)
//                 timeHash[j] = 1;
//             meetingCount++;
//         }
//     }
//     return meetingCount;
// }

/********************************************************** MAIN ********************************************************** */
// int main(){
//     int n;
//     cin>>n;
    
//     vector<int> start(n), end(n);
//     for(int i = 0; i<n; i++)
//         cin>>start[i]>>end[i];
//     cout<<maxMeetings(start, end);
//     return 0;
// }