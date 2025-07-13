#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    //Function to return the largest possible number of n digits
    //with sum equal to given sum.
    string largestNumber(int n, int sum) {
        // Your code here
        if(sum>9*n) return "-1";
        //if(!sum && n>1) return "-1";

        string ans = "";
        for(int i = 0; i<n; i++){
            int digit = min(9, sum);
            ans+=to_string(digit);

            sum-=digit;
        }
        return ans;
    }
};

int main(){
    int n, sum;
    cin>>n>>sum;

    Solution obj;
    cout<<obj.largestNumber(n, sum);

    return 0;
}