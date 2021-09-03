#include<iostream>
#include<bits/stdc++.h>

using namespace std;

struct node{
int data;
node *left, *right;

node(){
this->left = this->right = NULL;
}

node(int data){
this->left = this->right = NULL;
this->data = data;
}

};

void insert_(node *root, int data){
if(!root){
    root = new node(data);
}
else{
    if(root->data>data){
        insert_(root->right, data);
    }
    if(root->data<=data){
        insert_(root->left, data);
    }
}
}



int max_path_utils(node*root, int &result){
if(!root){
    return 0;
}

int left = max_path_utils(root->left, result);
int right = max_path_utils(root->right, result);

int max_straight = max(max(left,right)+root->data, root->data);
int max_case_value = max(max_straight, left+right+root->data);

result = max(max_case_value, result);

return max_straight;
}

int maxPathSum(node*root){
int result = INT_MIN;

max_path_utils(root, result);
return result;
}

int main()
{
    node* root = new node(-1);
    root->left = new node(1);
    root->right = new node(2);
    root->left->left = new node(4);
    root->left->left->left = new node(8);
    root->left->left->right = new node(4);
    root->left->right = new node(5);
    root->left->right->right = new node(-10);

    int result = maxPathSum(root);
    cout<<"test_01:"<<result;
}
