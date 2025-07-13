#include<bits/stdc++.h>
using namespace std;

string isDivisibleBy5(string bin){
    //complete the function here
    int num = 0;
    for(int i = 0; i<bin.size(); i++){
        num = (num*2 + (bin[i]-'0')) %5;
    }
    return num%5?"No":"Yes";
}

int main(){
    string bin;
    cin>>bin;

    cout<<isDivisibleBy5(bin);

    return 0;
}