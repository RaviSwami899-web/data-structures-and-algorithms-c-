#include<bits/stdc++.h>

using namespace std;

int downToZero(int n) {
    /*
     * Write your code here.
     */
    int max, curr;
    vector<int> stack;
    stack.push_back(n);

    while(n>0){
        max = n;
        for(int i = 1; i<n; i++){
            if(n%i==0){
                curr =  i>(n/i)?i:(n/i);
                if(curr<=max){
                    max = curr;
                }
            }

        }

        if(max==n){
            n = n-1;
        }
        else{
            n = max;
        }
        cout<<n<<" ";
        stack.push_back(n);
    }
    return stack.size()-1;
}


int main(){

int x;
while(x>0){
    cin>>x;
    cout<<endl<<x<<":"<<downToZero(x)<<endl<<endl;
}
}
