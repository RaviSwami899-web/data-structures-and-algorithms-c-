#include<iostream>
#include<bits/stdc++.h>
#include<math.h>

using namespace std;

int main(){
int a = 1, n = 2000;

vector<bool> prime(n+1,true);

for(int i = 2; i<=sqrt(n); i++){
    if(prime[i])
    {
        for(int j = i*i; j<=n; j+=i)
            prime[j] = false;
    }
}

for(int i = 2>a?2:a ; i<=n; i++){
    if(prime[i])
        cout<<i<<" ";
}
}

















