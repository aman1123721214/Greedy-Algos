#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string smallestNumber(string num){ 
        //code here.
        
        int n = num.size();
        vector<int> arr;

        for(char ch:num)
            arr.push_back(ch-'0');
        // cout<<endl;
        // for(int it:arr) cout<<it<<" ";
        //store rightmost smallest element and its index for each elements in arr
        vector<pair<int,int>> mini(n); //arr[i] = {smallest_element, index}
        stack<pair<int, int>> st;

        for(int i = n-1; i>=0; i--){
            while(!st.empty() && st.top().first>=arr[i])  st.pop();
            if(st.empty()) mini[i] = {-1, n};
            else if(arr[i]>st.top().first){
                mini[i] = st.top();
                continue;
            }
            st.push({arr[i], i});
        }
        // cout<<endl;
        // for(pair<int, int> it:mini) cout<<it.first<<" "<<it.second<<" ";

        for(int i = 0; i<n-1; i++){
            if(mini[i].first == -1) break;
            if(!mini[i].first) continue;
            swap(arr[i], arr[mini[i].second]);
            break;
        }
        string ans = "";
        for(int it:arr) ans+=to_string(it);
        return ans;
    }
};

int main(){
    string num;
    cin>>num;

    Solution obj;
    cout<<obj.smallestNumber(num);

    return 0;
}