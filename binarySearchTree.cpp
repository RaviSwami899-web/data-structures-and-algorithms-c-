#include<iostream>
#include<bits/stdc++.h>

using namespace std;

struct bstNode{
    int data;
    struct bstNode* left, *right;

    bstNode(){
    this->left = this->right = NULL;
    }
    bstNode(int data){
    this->left = this->right = NULL;
    this->data = data;
    }
};


class bst{
private:
    struct bstNode* root;
    vector<int> sortedArr;

    void Sort_(bstNode **root){
    if(*root!=NULL){
        this->Print(&(*root)->left);
        this->sortedArr.push_back((*root)->data);
        this->Print(&(*root)->right);
    }
    }

    void Print(bstNode **root){
    if(*root!=NULL){
        this->Print(&(*root)->left);
        cout<<(*root)->data<<" ";
        this->Print(&(*root)->right);
    }
    }

    void Insert(bstNode** root, int data){
    if(*root==NULL){
        *root = new bstNode(data);
    }

    else{
        if((*root)->data>=data){
            this->Insert(&(*root)->left, data);
        }
        else{
            this->Insert(&(*root)->right, data);
        }
    }
    }
public:
    bst(){
    this->root = NULL;
    }

    bst(int data){
    this->root = new bstNode(data);
    }

    void print_(){
        this->Print(&(this->root));
        cout<<endl;
    }

    void insert_(int data){
        this->Insert(&(this->root), data);
    }

    vector<int> sorted_arr(){
    this->Sort_(&(this->root));
    return this->sortedArr;
    }
};



int main()
{

    bst *newBst = new bst();

    vector<int> unsorted_Arr = {10,45,2,3,9,11,10,45,9};

    cout<<endl<<"unsorted array:"<<endl;

    for(int x:unsorted_Arr){
        newBst->insert_(x);
    }



    /*
    newBst->insert_(4);
    newBst->insert_(12);
    newBst->insert_(78);
    newBst->insert_(3);

    newBst->print_();

    vector<int> globalV;
    globalV = newBst->sorted_arr();

    cout<<"printing global vector:"<<endl;
    for(int x: globalV){
        cout<<x<<" ";
    }
    */
}



