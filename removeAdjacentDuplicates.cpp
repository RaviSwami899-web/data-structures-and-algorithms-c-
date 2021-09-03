#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str = "geeksforgeeg";
    string rst = "";
    int i = 0;
    while(str[i]){
        if(str[i]!=str[i+1]){
            rst+=str[i];
            i++;
        }
        if(str[i+1] && str[i]==str[i+1]){
            while(str[i]==str[i+1] && str[i+1]){
                i++;
            }
            i++;
        }
    }

    cout<<str<<endl;
    cout<<rst;

}
