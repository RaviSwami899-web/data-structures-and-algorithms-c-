#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
int a,b;
a = 1;
b = 12000;

vector<bool> prime(b+1,true);
prime[0] = false;
prime[1] = false;

for(int i = 2; i<=b/2; i++){
    if(prime[i]){
        for(int j = 2*i; j<=b; j=j+i){
            prime[j] = false;
        }
    }
}

for(int i = a; i<=b; i++){
    if(prime[i])
        cout<<i<<" ";
}
}

















