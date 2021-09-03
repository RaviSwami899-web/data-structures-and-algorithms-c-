#include<iostream>
#include<bits/stdc++.h>
#include<math.h>

using namespace std;

void find_K_PrimeFactors(int a, int b, int k){
vector<int> count_factors(b+1, 0);
vector<bool> prime(b+1, true);

for(int i = 2; i<=sqrt(b); i++){
    if(prime[i]){
        count_factors[i]+=1;
        for(int j = 2*i; j<=b; j+=i){
            count_factors[j]+=1;
            prime[j] = false;
        }
    }
}
for(int i = a; i<=b; i++){
    if(count_factors[i]==k){
        cout<<i<<" ";
    }
}
}

int main(){
int a = 2;
int b = 45;
int k = 2;
find_K_PrimeFactors(a,b,k);
return 0;
}















