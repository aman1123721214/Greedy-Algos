#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string stringFilter(string str) { 
        //code here.
        int n = str.size();
        string ans = "";
        for(int i = 0; i<n; i++){
            if(str[i] == 'b') continue;
            if(str[i] == 'a' && i!=(n-1) && str[i+1] == 'c') {
                i++;
                continue;
            }
            ans.push_back(str[i]);
        }
        return ans;
    } 
};

int main(){
    string str;
    cin>>str;
    Solution obj;
    cout<<obj.stringFilter(str);

    return 0;
}