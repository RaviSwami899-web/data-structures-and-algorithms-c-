#include<iostream>
#include<bits/stdc++.h>

using namespace std;


struct node{
int data;
struct node* left,*right;

node(){
this->left = this->right = NULL;
}

node(int data){
this->left = this->right = NULL;
this->data = data;
}
};

void printLeftView(node *root)
{
 if(root==NULL){
    return;
 }

 queue<node *> q;
 q.push(root);

 while(!q.empty()){
    int n = q.size();

    for(int i=1; i<=n; i++){

        node *top = q.front();
        q.pop();

        if(i==1){
        cout<<top->data<<" ";
        }

        if(top->left!=NULL){
            q.push(top->left);
        }
        if(top->right!=NULL){
            q.push(top->right);
        }
    }
 }

}
