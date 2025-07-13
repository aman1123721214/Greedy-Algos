#include<bits/stdc++.h>
using namespace std;

class Solution{   
  public:
    int isPossible(string S){
        //Code Here
        unordered_set<string> st;
        string str = "";

        for(char ch: S){
            str+=ch;
            if(st.find(str) ==  st.end()){
                st.insert(str);
                str = "";
            }
            if(st.size() == 4) return 1;
        }
        return 0;
    }
};

/* geeksforgeeks */
int main(){
    string s;   cin>>s;
    Solution obj;
    cout<<obj.isPossible(s);

    return 0;
}