#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void spiralTraversal(vector<vector<int>>&arr){
int dir = 0, top = 0, left = 0, bottom = arr.size()-1, right = arr[0].size()-1;

while(top<=bottom && left<=right){
    if(dir == 0){
        for(int i = left; i<=right; i++){
            cout<<arr[top][i]<<" ";
        }
        top++;
    }
    else if(dir == 1){
        for(int i = top; i<=bottom; i++){
            cout<<arr[i][right]<<" ";
        }
        right--;
    }

    else if(dir == 2){
        for(int i = right; i>=left; i--){
            cout<<arr[bottom][i]<<" ";
        }
        bottom--;
    }
    else if(dir == 3){
        for(int i = bottom; i>=top; i--){
            cout<<arr[i][left]<<" ";
        }
        left++;
    }
    dir = (dir+1)%4;
}
}

int main()
{

    vector<vector<int>> arr = {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20}};

    spiralTraversal(arr);
    return 0;
}
