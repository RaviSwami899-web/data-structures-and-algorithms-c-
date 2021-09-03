#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int minCandyRequired(vector<int>&arr){
vector<int> lr(arr.size(),1);
vector<int> rl(arr.size(),1);
int result=0;

for(int i = 1; i<arr.size(); i++){
    if(arr[i]>arr[i-1]){
        lr[i] = lr[i-1]+1;
    }
}

for(int j = arr.size()-2; j>=0; j--){
    if(arr[j]>arr[j+1]){
        rl[j] = rl[j+1]+1;
    }
}


for(int i = 0; i<arr.size(); i++){
    result+=lr[i]>rl[i]?lr[i]:rl[i];
}

return result;
}


int main(){
vector<int> arr = {12,4,3};
int result = minCandyRequired(arr);
cout<<"test_01:"<<result;
}
