#include<iostream>
#include<bits/stdc++.h>

using namespace std;

vector<int> primeNumbersVector(int n){
   vector<int> prime_nos;
   int flag;
   for(int i=3; i<=n; i++){
        flag = 1;
    for(int j=2; j*j<=i; j++){
        if(i%j==0){
            flag=0;
            break;
        }
    }
    if(flag){
        prime_nos.push_back(i);
    }
   }
   return prime_nos;
}


int maxPrimeFactors(vector<int> arr, vector<int> prime_nos, int N){

int n, memo[N+1] = {0}, max_=0;
auto j=prime_nos.begin();
int flag = 0;
for(int x:arr){
    n = x;
    int count_=0;
    flag = 0;
    while(n!=1){
        /*
        if(memo[n]!=0){
            count_+=memo[n];
            n = 1;
            break;
        }
        */
        if(n%(*j)==0){
            n = n/(*j);
            flag = 1;
        }
        else{
            if(flag){
            count_++;
            }
            j++;
            flag=0;
        }

    }
    //memo[x] = count_;
    if(count_>max_){
        max_ = count_;
        cout<<x<<":"<<count_;
    }
}
return max_;
}

int main(){

vector<int> arr = {12,34,44,47,55,63,67,68,69,100};
vector<int> prime_nos = primeNumbersVector(100);

int result = maxPrimeFactors(arr, prime_nos, 100);

cout<<"output:"<<result;

}
