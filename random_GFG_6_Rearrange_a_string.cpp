#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string arrangeString(string str) {
        //code here.
        int sum = 0;
        bool flag = false;
        vector<int> freq(26, 0);
        for(char ch:str){
            if(isdigit(ch)){
                sum+=(ch-'0');
                flag = true;
                continue;
            }
            freq[ch-'A']++;
        }

        string ans = "";
        for(int i = 0; i<26; i++)
            while(freq[i]--) ans += char('A'+i);
        return !flag?ans:(ans+=to_string(sum));
    }
};

int main(){
    string str;cin>>str;
    Solution obj;
    cout<<obj.arrangeString(str);

    return 0;
}