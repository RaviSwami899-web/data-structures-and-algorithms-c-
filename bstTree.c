#include<stdio.h>



struct bstNode
{
    int data;
    struct bstNode *left;
    struct bstNode *right;
};


struct bstNode* InitializeA_bstNode(int data)
{
    struct bstNode* temp = (struct bstNode*)malloc(sizeof(struct bstNode));
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}

struct bstNode *root = NULL;

void Insert(struct bstNode** root, int data)
{
    if(*root == NULL)
    {
        *root = InitializeA_bstNode(data);
    }

    else if(data <= *root->data)
        Insert(*root->left, data);
    else if(data > *root->data)
        Insert(*root->right, data);
}


int main()
{
    Insert(root, 15);
    Insert(root, 10);
    Insert(root, 20);
    Insert(root, 8);
    Insert(root, 12);
    Insert(root, 17);
    Insert(root, 25);

    printf("%d",root->data);
    printf("%d",root->left->data);
    printf("%d",root->right->data);
    return 0;
}
