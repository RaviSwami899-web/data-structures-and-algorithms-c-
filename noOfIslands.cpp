#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int countIslands(int arr[4][5],int n, int m){

queue<vector<int>>q;

int islands = 0;
for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        if(arr[i][j]==1)
            {q.push({i,j});
             arr[i][j] = 2;
             islands++;
        }
        while(!q.empty()){
            int x = q.front()[0];
            int y = q.front()[1];

            if(arr[x-1][y]==1){
                q.push({x-1,y});
                arr[x-1][y] = 2;
            }
            if(arr[x+1][y]==1){
                q.push({x+1,y});
                arr[x+1][y] = 2;
            }
            if(arr[x][y-1]==1){
                q.push({x,y-1});
                arr[x][y-1] = 2;
            }
            if(arr[x][y+1]==1){
                q.push({x,y+1});
                arr[x][y+1] = 2;
            }

            q.pop();

        }
    }
}
return islands;
}

int main()
{

    int arr[4][5] = {{1,1,0,0,0},{1,1,0,0,0},{0,0,1,0,0},{0,0,0,1,1}};
    int result = countIslands(arr,4,5);
    cout<<"number of islands in the boolean matrix:"<<result;
    return 0;
}
