#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    string longDivision(string S, int D) {
        //Code here
        int num = 0;
        string ans;
        for(char ch:S){
            num = num*10 + (ch-'0');
            int qnt = num/D;
            ans+=to_string(qnt);
            num -= qnt*D;
        }
        while(ans.front() == '0' && ans.size()>1) ans.erase(ans.begin());
        return ans;
    }
};

int main(){
    string S;
    int D;
    cin>>S>>D;

    Solution obj;
    cout<<obj.longDivision(S, D);

    return 0;
}