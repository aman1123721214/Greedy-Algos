#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int n = g.size(), m = s.size();
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int sptr = 0, gptr = 0;
        while(sptr<m){
            if(s[sptr]>=g[gptr])    sptr++, gptr++;
            else sptr++;
            if(gptr == n) return n;
        } 
        return gptr+1;
    }
};

int main(){
    int n, m;
    cin>>n>>m;
    vector<int> g(n), s(m);
    for(int i = 0; i<n; i++) cin>>g[i]; 
    for(int i = 0; i<m; i++) cin>>s[i];
    Solution obj;
    cout<< obj.findContentChildren(g, s);
    return 0;
}