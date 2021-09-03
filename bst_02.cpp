#include<iostream>
#include<bits/stdc++.h>

using namespace std;

// bstNode: binary search tree node
struct bstNode
{
    int data;
    bstNode *left;
    bstNode *right;

    bstNode()
    {
        this->left = this->right = NULL;
    }
    bstNode(int data)
    {
        this->data = data;
        this->left = this->right = NULL;
    }
};

class BST
{
private:
    bstNode *root = NULL;

    void Insert(bstNode **root, int data)
    {
        if(*root == NULL)
            *root = new bstNode(data);
        else if((*root)->data >= data)
            this->Insert(&(*root)->left, data);
        else if((*root)->data < data)
            this->Insert(&(*root)->right, data);
    }

    bool Search(bstNode **root, int data)
    {
        if(*root == NULL)
            return false;
        else if((*root)->data == data)
            return true;
        else if((*root)->data > data)
            return this->Search(&(*root)->left, data);
        else if((*root)->data < data)
            return this->Search(&(*root)->right, data);
    }

    void Print(bstNode **root)
    {
        if(*root != NULL)
        {
            this->Print(&(*root)->left);
            cout<<(*root)->data<<" ";
            this->Print(&(*root)->right);
        }
    }
public:
    void insert_(int data)
    {
        this->Insert(&this->root, data);
    }

    bool search_(int data)
    {
        bool result;
        result = this->Search(&this->root, data);
        return result;
    }

    void print()
    {
        this->Print(&this->root);
    }

};


int main()
{
    BST *bst_tree = new BST();
    bst_tree->insert_(15);
    bst_tree->insert_(10);
    bst_tree->insert_(20);
    bst_tree->insert_(8);
    bst_tree->insert_(12);
    bst_tree->insert_(17);
    bst_tree->insert_(25);

    bst_tree->print();
}

