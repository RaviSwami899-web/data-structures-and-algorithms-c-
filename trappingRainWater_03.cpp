#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int rainWater(int n, int *A){
int i=0, rain_water=0, count_=0, sum_=0, max_= 0;

while(i<n){
    if(*(A+i)>=max_){
        rain_water+=(max_*count_ - sum_);
        max_ = A[i];
        count_ = sum_ = 0;
    }


    count_++;
    sum_+=A[i];


    i++;
}
return rain_water;
}

int main(){
int N=7, A[7] = {8, 8, 2, 4, 5, 5, 1};
cout<<"test_sample_01:"<<rainWater(N,A);
return 0;

}
