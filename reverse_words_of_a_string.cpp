#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str = "this book is mine";
    string result = "";

    int i = 0;
    while(str[i]){
        string word = "";
        while(str[i]!=' ' && str[i]){
            word+=str[i];
            i++;
        }
        i++;
        result = str[i]?" "+word+result:word+result;
    }


    cout<<str<<endl;
    cout<<result;

    return 0;
}
