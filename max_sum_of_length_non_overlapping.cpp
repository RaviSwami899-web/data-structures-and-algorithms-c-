#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr[10] = {2,3,0,2,9,2,3,8,3,7};
    int n = 10;
    int k = 4;
    int result=0, count_=0, flag = 0;

    for(int i = 0; i<n; i++){
        count_ = 0;
        flag = 0;

        while(arr[i]<=k && i<n){
            count_++;
            if(arr[i]==k)
                flag = 1;
            i++;
        }

        if(flag){
            result+=count_;
        }
    }

    cout<<"test_01:"<<result<<endl;
    return 0;
}
