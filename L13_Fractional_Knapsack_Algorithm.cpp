#include<iostream>
#include<bits/stdc++.h>
using namespace std;

double fractionalKnapsack(vector<int>& values, vector<int>& weights, int w) {
    // Your code here
    int n = weights.size();
    vector<pair<double, int>> unitCost(n);
    for(int i = 0; i<n; i++){
        unitCost[i].first = ((double)values[i]/(double)weights[i]);
        unitCost[i].second = i;
    }
    //sort in descending order
    sort(unitCost.rbegin(), unitCost.rend());

    int i = 0, emptyWt = w;
    double sum = 0.0;
    while(i<n){
        int ind = unitCost[i].second;
        double reqWt = weights[ind];

        if(emptyWt>=reqWt){
            emptyWt -= reqWt;
            sum+=values[ind];
        }
        else break;
        i++;
    }
    if(i<n){
        sum+=(unitCost[i].first * (double)emptyWt);
    }
    return sum;
}

int main(){
    int n; cin>>n;
    vector<int> value(n), weights(n);
    for(int i = 0; i<n; i++){
        cin>>value[i]>>weights[i];
    }

    int w; cin>>w;
    cout<<fractionalKnapsack(value, weights, w);
}
