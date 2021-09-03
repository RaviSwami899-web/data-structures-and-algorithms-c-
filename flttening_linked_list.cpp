#include<iostream>
#include<bits/stdc++.h>

using namespace std;


class bst{
public:
    struct node{
        int data;
        struct node* left;
        struct node* right;

        node(){
        this->left = NULL;
        this->right = NULL;
        }

        node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }

    struct node*root;

    bst(){
        this->root = new node();
    }
    bst(int d){
        this->root = new node(d);
    }


    void insert_(int data){

    }
    };
};
