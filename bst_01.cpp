#include<iostream>
#include<bits/stdc++.h>

using namespace std;

struct bstNode
{
    int data;
    bstNode *left;
    bstNode *right;

    bstNode()
    {
        this->left = NULL;
        this->right = NULL;
    }

    bstNode(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

bstNode *root = NULL;

void Insert(bstNode** root, int inp_data)
{
    if(*root == NULL)
        *root = new bstNode(inp_data);

    else if((*root)->data >= inp_data)
        Insert(&(*root)->left, inp_data);

    else
        Insert(&(*root)->right, inp_data);
}

bool Search(bstNode** root, int data)
{
    if(*root == NULL)
        return false;

    else if((*root)->data == data)
        return true;

    else if((*root)->data >= data)
        return Search(&(*root)->left, data);

    else if((*root)->data < data)
        return Search(&(*root)->right, data);
}

int main()
{
    Insert(&root, 15);
    Insert(&root, 10);
    Insert(&root, 20);
    Insert(&root, 8);
    Insert(&root, 12);
    Insert(&root, 17);
    Insert(&root, 25);

    cout<<Search(&root, 17)<<endl;
    cout<<Search(&root, 2)<<endl;

    cout<<root->data<<" "<<root->left->data<<" "<<root->right->data;
}





