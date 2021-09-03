#include<iostream>
#include<bits/stdc++.h>

using namespace std;

char findFirstNonRepeatingChar(string s){
int char_counts[26] = {0};

for(char c:s){
    char_counts[c-'a']++;
}
for(char c:s){
    if(char_counts[c-'a']==1)
        return c;
    cout<<c<<":"<<char_counts[c-'a'-1]<<endl;
}
return '_';
}


int main(){
string str = "bbccdacd";
char result = findFirstNonRepeatingChar(str);

cout<<"test_01:"<<result;
}
