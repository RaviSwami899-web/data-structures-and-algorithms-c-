#include<iostream>
#include<bits/stdc++.h>

using namespace std;

vector<int> maxProfit(vector<int>&arr, int n){
vector<int> profits;
profits.push_back(0);
int i = 1;

while(i<n){
    int flag = 0;
    int peak_index = i;
    if(arr[i]>arr[i-1]){
        int peak = arr[i];
        for(int j = i+1; j<n; j++){
            if(arr[j]>peak){
                peak = arr[j];
                peak_index = j;
            }
            else{
                break;
            }
        }
        profits.push_back(peak-arr[i-1]);
    }
    i = peak_index+1;
}

int idx1 = 0;
int idx2 = 0;
for(int i = 1; i<profits.size(); i++){
    if(profits[i]>=profits[idx1]){
        idx1 = i;
    }
}
for(int i = 1; i<profits.size(); i++){
    if(profits[i]>=profits[idx2] && idx1!=i){
        idx2 = i;
       }
}

cout<<"two_max_profits:"<<profits[idx1]<<", "<<profits[idx2]<<endl;
return profits;
}
int main(){
vector<int> prices = {7,50,55,45,20,18,90,100,3,9};
vector<int> result = maxProfit(prices,10);

for(int x: result){
    cout<<x<<" ";
}
}
