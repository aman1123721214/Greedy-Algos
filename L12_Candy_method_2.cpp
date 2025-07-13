#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int minCandy(int n, vector<int> &ratings) {
        // code here
        int i = 1, sum = 1;
        while(i<n){
            //same level
            if(i<n && (ratings[i] == ratings[i-1])){
                sum+=1;
                i++;
                continue; 
            }

            //increasing slope
            int peak = 1;
            while(i<n && (ratings[i]>ratings[i-1])){
                peak++;
                sum+=peak;
                i++;
            }

            //decreasing slope
            int down = 1;
            while(i<n && (ratings[i]<ratings[i-1])){
                sum+=down;
                down++;
                i++;
            }
            if(down>peak)
                sum+=(down-peak);
        }
        return sum;
    }
};
//rating = {0 2 4 3 2 1 1 3 5 6 4 0 0}
int main(){
    int n; cin>>n;
    vector<int> ratings(n);
    for(int i = 0; i<n; i++)
    cin>>ratings[i];

    Solution obj;
    cout<<obj.minCandy(n, ratings);
    return 0;
}