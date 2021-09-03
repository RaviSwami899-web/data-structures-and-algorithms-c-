#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void firstDuplicate(int arr[], int n){
unordered_map<int, int> unmap;
int flag = 1;
for(int i=0; i<n; i++){

    if(unmap.find(arr[i])!=unmap.end()){
        cout<<"the first duplicate is:"<<arr[i];
        cout<<endl<<"index numbers for fst occurance and snd occurance:"<<unmap[arr[i]]<<","<<i;
        flag = 0;
        break;
    }
    unmap.insert(make_pair(arr[i],i));
}
if(flag)
    cout<<"there is no duplicate found in the array";
}

int main()
{

    int arr[9] = {1,2,8,3,5,10,12,13,13};
    firstDuplicate(arr,9);
}
