#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int isdivisible7(string s) {
        // complete the function here
        int num = 0;
        for(int i = 0; i<s.size(); i++)
            num = (num*10 + (s[i]-'0'))%7;
        return num?0:1;
    }
};

int main(){
    string s;
    cin>>s;

    Solution obj;
    cout<<obj.isdivisible7(s);
    return 0;
}
