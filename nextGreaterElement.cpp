#include<iostream>
#include<bits/stdc++.h>


using namespace std;

vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
        long long prev_max = arr[n-1];
        vector<long long> result;
        stack<long long> little_stack;

        little_stack.push(arr[n-1]);
        result.push_back(-1);

        for(int i=n-2; i>=0; i--){
            if(arr[i]<=arr[i+1]){
                result.push_back(arr[i+1]);
            }

            else{
                if(arr[i]<=prev_max){
                    result.push_back(prev_max);
                }
                else{
                    result.push_back(-1);
                    prev_max = arr[i];
                }
            }
        }
        reverse(result.begin(), result.end());
        return result;

    }


 int main(){
 vector<long long> arr = {10,3,12,4,2,9,13,0,8,11,1,7,5,6};
 vector<long long> out = nextLargerElement(arr,14);

 for(long long x: out){
    cout<<x<<" ";
 }
 }
