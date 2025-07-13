#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string findLargest(int n, int s) {
        // code here
        if(s == 0 && n>1) return "-1";
        if(s>9*n) return "-1";

        string ans = "";

        for(int i = 0; i<n; i++){
            int digit = min(9, s);
            ans+=to_string(digit);
            s -= digit;
        }
        return ans;
    }
};

// class Solution {
//     public:
//       string findLargest(int n, int s) {
//         // code here
//         if(s == 0 && n>1) return "-1";
//         if(s>9*n) return "-1";

//         string ans = "";
//         for(int div = 9; div>0; div--){
//             int digits = s/div;
            
//             while(digits--){
//                 ans += (char)div;
//                 n--;
//                 s -= div;
//                 cout<<div;
//             }
//         }
//         while(n--) ans.push_back('0');
//         return ans;
//     }
// };

int main(){
    int n, s;   cin>>n>>s;
    Solution obj;
    cout<<obj.findLargest(n, s);

    return 0;
}