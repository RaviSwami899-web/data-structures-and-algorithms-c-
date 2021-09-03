#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int count_paths(int n){
if(n==0)
    return 1;
else if(n<0)
    return 0;

else
    return (count_paths(n-1)+count_paths(n-2));
}


int main(){
int total_paths;
total_paths = count_paths(4);
cout<<"test_01:"<<total_paths;
return 0;
}



