#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string arrangeString(string str, int x, int y) {
        //code here.
        int totalZero = 0, totalOne = 0;
        for(char ch:str){
            if(ch == '0') totalZero++;
            else totalOne++;
        }

        string ans = "";
        bool useZero = true;

        while(totalZero>0 || totalOne>0){
            if(useZero && totalZero>0){
                int count = min(x, totalZero);
                ans+=string(count, '0');
                totalZero -= count;
            }
            if(!useZero && totalOne>0){
                int count = min(y, totalOne);
                ans+=string(count, '1');
                totalOne -= count;
            }
            useZero = !useZero;
            if(totalZero == 0 || totalOne == 0) break;
        }

        if(totalZero > 0) ans+=string(totalZero, '0');
        if(totalOne > 0) ans+=string(totalOne, '1');

        return ans;
    }
};
/*
ip =
3 6
1111010001000010101000111010101
op =
0001111110001111110001110000000
*/

int main(){
    string str; cin>>str;
    int x, y;   cin>>x>>y;

    Solution obj;
    cout<<obj.arrangeString(str, x, y);

    return 0;
}