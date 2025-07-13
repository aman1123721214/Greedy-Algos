#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int minCandy(int n, vector<int> &ratings) {
        // code here
        vector<int> left(n);
        left[0] = 1;
        for(int i = 1; i<n; i++){
            if(ratings[i]>ratings[i-1]){
                left[i] = left[i-1]+1;
            }
            else left[i] = 1;
        }

        vector<int> right(n);
        right[n-1] = 1;
        for(int j = n-2; j>=0; j--){
            if(ratings[j]>ratings[j+1]){
                right[j] = right[j+1]+1;
            }
            else right[j] = 1;
        }

        int sum = 0;
        for(int i = 0; i<n; i++){
            sum+=max(left[i], right[i]);
        }
        return sum;
    }
};
//rating = {0 2 4 3 2 1 1 3 5 6 4 0 0}
//left =   {1 2 3 1 1 1 1 2 3 4 1 1 1}
//right =  {1 1 4 3 2 1 1 1 1 3 2 1 1}

int main(){
    int n; cin>>n;
    vector<int> ratings(n);
    for(int i = 0; i<n; i++)
    cin>>ratings[i];

    Solution obj;
    cout<<obj.minCandy(n, ratings);
    return 0;
}