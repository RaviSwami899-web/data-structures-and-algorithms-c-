#include<iostream>
#include<bits/stdc++.h>

using namespace std;

char firstNonRepeatingChar(string s){
unordered_map<char, int> char_counts;
for(char c: s){
    if(char_counts.find(c)!=char_counts.end()){
        char_counts[c]++;
    }
    else{
        char_counts.insert(make_pair(c,1));
    }
}

unordered_map<char, int>::iterator p;
for(p = char_counts.begin(); p!=char_counts.end(); p++){
    if(p->second==1){
        return p->first;
    }
}
return '_';
}

int main(){
string str = "aabbcbadefjinoonz";
char result = firstNonRepeatingChar(str);

cout<<"test_01:"<<result;
}
