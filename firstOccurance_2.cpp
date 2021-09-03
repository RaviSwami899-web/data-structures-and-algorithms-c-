#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void firstDuplicate(int arr[], int n){
int arr2[n+1] = {0};
int flag=1;

for(int i=0; i<n; i++){
    arr2[arr[i]]++;
    if(arr2[arr[i]]>1){
        cout<<"first duplicate is:"<<arr[i];
        cout<<endl<<"and it reoccur at index:"<<i;
        flag = 0;
        break;
    }
}
if(flag)
    cout<<endl<<"there is no duplicate present in the array";
}


int main(){
    int arr[9] = {1,2,3,4,5,6,4,8,8};
    firstDuplicate(arr,9);
return 0;
}
