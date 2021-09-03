#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void prCharWithFreq(string s){
unordered_map<char, int> d;

for(char x:s){
    if(x!=' ')
        d[x]++;
}

for(char x:s){
    if(d[x]!=0){
        cout<<x<<" "<<d[x]<<" ";
        d[x] = 0;
    }
}

}


int main(){
string str = "geeks for geek";
prCharWithFreq(str);
return 0;
}
