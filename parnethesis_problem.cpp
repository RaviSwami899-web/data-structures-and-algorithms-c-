#include<iostream>
#include<bits/stdc++.h>
#include<math.h>

using namespace std;

void checkEligibility(vector<int> &arr){
int sum_= 0, flag = 1;
for(int x: arr){
    sum_+=x;
    if(sum_<0)
        {flag = 0;
        break;}
}
if(flag){
    for(int x: arr){
        if(x==1){
            cout<<"{";
        }
        else{
            cout<<"}";
        }
    }
    cout<<endl;
}
}

void findAllPossible(int n){
vector<int> arr(n*2,-1);

for(int i = n; i<2*n; i++){
    arr[i] = 1;
}

do{
    checkEligibility(arr);
}while(next_permutation(arr.begin(),arr.end()));


}


int main(){
findAllPossible(5);
return 0;
}
