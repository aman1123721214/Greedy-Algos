#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkValidString(string str) {
        int n = str.size();
        int left = 0;
        for(int i = 0; i<n; i++){
            //taking '(' or '*' as open parenthesis
            if(str[i] == '(' || str[i] == '*')
                left++;
            //')' as closes an open parenthesis
            else left--;
            //invalid if '(' decreases than ')'
            if(left<0) return 0;
        }
        
        int right = 0;
        for(int i = n-1; i>=0; i--){
            //taking ')' or '*' as close parenthesis
            if(str[i] == ')' || str[i] == '*')
                right++;
            //'(' needs to be matched with ')'
            else right--;
            //invalid if count of '(' increases the count of ')'
            if(right<0) return 0;
        }
        return 1;
        //count of '(' and ')' are equal
    }
};

int main(){
    string str;
    cin>>str;
    Solution obj;
    cout<<obj.checkValidString(str);
    return 0;
}