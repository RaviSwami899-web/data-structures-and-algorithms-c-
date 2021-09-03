#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class LinkedList
{
private:
    // defining node of the linked_list
    struct Node
    {
        /*Structure node contains two elements one is the data
        and other is the pointer to node type object*/
        int data;
        struct Node* next;

        /*parametrized constructor*/
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
        Node()
        {
            this->next = NULL;
        }
    };
    struct Node* head;

public:
    // initializing linked_list
    LinkedList()
    {
        this->head = NULL;
    }
    void append(int data)
    {
        if(this->head==NULL)
        {
            this->head = new Node(data);
        }
        else
        {
            struct Node *a = this->head;
            struct Node *temp = new Node(data);

            while(a->next!=NULL)
            {
                a = a->next;
            }
            temp = a;
        }
    }

    void printList()
    {
        struct Node *a = this->head;
        while(a!=NULL)
        {
            cout<<a->data<<" ";
            a = a->next;
        }
    }
};

int main()
{
    LinkedList *newList = new LinkedList();

    newList->append(1);
    newList->append(2);
    newList->append(3);
    newList->append(4);
    newList->printList();
}
