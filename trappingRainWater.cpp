#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int rainWater(int N, int *A){
int water_amount = 0, j, sum_, count_, max_=0;
for(int i=0; i<N; i++){
     count_=0;
     sum_=0;
     j = i+1;
     if(A[i]>=max_){
        while(j<N){
        if(A[j]>=A[i]){
            water_amount+=(count_*A[i]-sum_);
            max_=A[j];
            break;
        }
        else{
            count_++;
            sum_+=A[j];
        }
        j++;
     }
     }
}
return water_amount;
}

int main(){
int A[] = {1,3,2,4,0,0,2,0,3,4,2,1};
cout<<"test_sample_01:"<<rainWater(12,A);
}
