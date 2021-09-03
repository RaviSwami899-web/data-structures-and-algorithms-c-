#include<iostream>
#include<bits/stdc++.h>

using namespace std;

vector<int> primeNumbers(int n){
    vector<int> prime_nos;
    int is_prime,j;

for(int i=2; i<=n; i++){
    is_prime = 1;
    j=2;
    while(j<n){
        j++;
        if(i%j==0)
        {
            is_prime = 0;
            break;
        }
    }
    if(is_prime)
        {
            cout<<i<<" ";
            prime_nos.push_back(i);
        }
}
return prime_nos;
}


int main(){
vector<int> prime_nos;

prime_nos = primeNumbers(18);
for(int p:prime_nos){
    cout<<p<<" ";
}
return 0;
}
