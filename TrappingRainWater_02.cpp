#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int rainWater(int N, int *A){
int i=0, j=0, rain_water_collection=0, count_=0, sum_=0;
/*
variables:
    i: to iterate over the Array;
    j: to iterate over the index in range (i+1,N-1);
    rain_water_collection: to store trapped rain_water;
    max_brick: max brick that is of size >= A[i];
    count_: count the number of bricks in range(i+1, condition) that are smaller than A[i];
    sum_: sum of non_zero bricks size in range (i+1, condition);
    */
while(i<N){
    j=i+1;
    sum_=count_=0;
    while(j<N){
            if(A[j]>=A[i]){
                rain_water_collection+=(count_*A[i] - sum_);
                cout<<"range:("<<i<<","<<j<<") ";
                i = j-1;
            }
            else{
                count_++;
                sum_+=A[j];
            }
            j++;
        }
    if(j==(N-1))
        break;
    i++;
}
return rain_water_collection;
}


int main(){
int N=12, A[] = {1,3,2,4,0,0,2,0,3,4,2,1};
cout<<"test_01:"<<rainWater(N,A);
return 0;
}
