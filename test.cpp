#include<iostream>
#include<bits/stdc++.h>

using namespace std;

vector<int> primeNumbersVector(int n){
   vector<int> prime_nos;
   int flag;
   for(int i=2; i<=n; i++){
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


int maxPrimeFactors(vector<int> arr, vector<int> prime_nos){

int flag, count_, max_=0, n;

for(int x:arr){
    count_=1;
    flag = 0;
    n = x;

    auto j=prime_nos.begin();
    int factor = *j;
    cout<<endl<<x<<":";

    while(n>1){
        if(n%factor==0){
            n = n/factor;
            cout<<factor<<",";
            flag = 1;
        }

        else{
            if(flag)
                count_++;
            j++;
            flag = 0;
            factor = *j;
        }
        }

    if(count_>max_){
        max_ = count_;
    }

    cout<<endl<<x<<":"<<count_;
    }


return max_;
}

int main(){

vector<int> arr = {12,34,44,47,55,63,67,68,69,100};
vector<int> prime_nos = primeNumbersVector(100);

int result = maxPrimeFactors(arr, prime_nos);

cout<<endl<<"output:"<<result;

return 0;
}
