// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// struct Job{
//     int id;
//     int dead;
//     int profit;
// };

// class Solution {
//    public:
//       bool static comparison(Job a, Job b) {
//          return (a.profit > b.profit);
//       }
//    //Function to find the maximum profit and the number of jobs done
//    pair < int, int > JobScheduling(Job arr[], int n) {

//       sort(arr, arr + n, comparison);
//       int maxi = arr[0].dead;
//       for (int i = 1; i < n; i++) {
//          maxi = max(maxi, arr[i].dead);
//       }

//       int slot[maxi + 1];

//       for (int i = 0; i <= maxi; i++)
//          slot[i] = -1;

//       int countJobs = 0, jobProfit = 0;

//       for (int i = 0; i < n; i++) {
//          for (int j = arr[i].dead; j > 0; j--) {
//             if (slot[j] == -1) {
//                slot[j] = i;
//                countJobs++;
//                jobProfit += arr[i].profit;
//                break;
//             }
//          }
//       }
//       return make_pair(countJobs, jobProfit);
//    }
// };