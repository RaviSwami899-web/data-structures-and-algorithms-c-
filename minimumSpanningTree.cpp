#include<iostream>
#include<bits/stdc++.h>
#include<fstream>
#include<iomanip>

using namespace std;


int main(){
unordered_map<string,vector<string>>unmap;
ifstream inFile;

inFile.open("test.txt");
string x;
string str = "";
int weight;

if(!inFile){
        cout << "Unable to open file";
        exit(1); // terminate with error
    }

while(inFile >>x) {
    vector<string>node_pair;
    string node="";

    for(char i:x){
        if(i==','){
            node_pair.push_back(node);
            //cout<<node<<" ";
            node = "";}
        else{
            node+=i;
        }
    }
    unmap.insert(make_pair(node_pair[0],node_pair));
    weight = stoi(node);
    //cout<<weight<<endl;

}
for(auto p:unmap){
    cout<<p.first<<":"<<p.second[0]<<","<<p.second[1];
}



inFile.close();

}
