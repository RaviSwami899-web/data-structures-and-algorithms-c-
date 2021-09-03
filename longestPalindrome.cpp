#include<iostream>
#include<bits/stdc++.h>

using namespace std;

string longestPalindromeSubstring(string str, int n){
vector<vector<int>> arr(n, vector<int>(n,0));
string longestPalindrome = "";
int max_len=0;
int a,b;


for(int i=0; i<n; i++){
    arr[i][i] = 1;
}
for(int i = 0; i<n-1; i++){
    if(str[i] == str[i+1])
        arr[i][i+1] = 1;
        max_len = 2;
        a = i;
        b = i+1;
}


for(int j = 3; j<n; j++){
    for(int i = 0; i<n-j; i++){
        if(str[i] == str[i+j] && arr[i+1][i+j-1]==1){
            arr[i][i+j] = 1;
            max_len = j+1;
            a = i;
            b = i+j;
        }
    }
}

cout<<"length of longest palindrome is:"<<max_len<<endl;
for(int i = a; i<=b; i++){
    cout<<str[i];
    longestPalindrome+=str[i];
}
cout<<endl;

return longestPalindrome;

}


int main(){
string str = "aaaabbaa";
longestPalindromeSubstring(str,8);
return 0;
}
