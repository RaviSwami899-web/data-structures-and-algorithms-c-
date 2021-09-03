#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class LinkedList
{
private:
	struct Node
	{
		int data;
		Node *next;

		Node(){next=NULL;}  // constructor function
	};
	Node *start = new Node(); // starting node of the linked list
	Node *end_node = start; // end node of the linked list
	int max_index = -1; // hold the last index of the linked list

public:
	void append(int data)
	{
	    /*append the data at the end of the linked list
	    Argument:
	    data -- int type value;
	    */

	    // create a temporary node and store the argument data value in this node
		Node *temp = new Node();
		temp->data = data;

		// the below logic is based on either linked list is empty or not
		if(this->max_index<0){
			start = temp;
			end_node  = temp;}
		else
		{
			end_node->next = temp;
			end_node = temp;
		}
		max_index+=1;
	}

	void push(int data)
	{
	    /*
	    pushes the new entry at the start of the linked list
	    Argument:
            data -- int type value
        */

        // create a temporary node temp and store the argument data value into it
		Node *temp = new Node();
		temp->data = data;
        if(this->start==NULL)
        {
            this->start = temp;
            this->end_node = temp;
        }
        else
		{
            temp->next = start;
            this->start = temp;
		}
		this->max_index+=1;
	}

	void insert_at(int index, int data)
	{
	    /*insert a new node at the desired index if desired index value is in the range (0,max_index)
	    Arguments:
            index -- index value at which the new node has to be added
            data  -- int type value
	    */

	    /*check weather index out range conditions*/
		if(index<0 or index>this->max_index)
			printf("\nError:index out of range\n");
		else
        {
            if (index==0)
            {
                this->push(data);
            }
            else if (index==this->max_index)
            {
                this->append(data);
            }
            else
            {
                // create a node n for traversing linked list
                Node *n = new Node();
                n = start;

                // create temporary node for temporary storing the data
                Node *temp = new Node();
                temp->data = data;

                for(int i=0;i<index-1;i++)
                    n = n->next;

                temp->next = n->next;
                n->next = temp;

                this->max_index+=1;
            }
        }
	}

	void show_list()
	{
	    /*show linked list*/

	    /*create a node n for traversing purpose*/
		Node *n = new Node();
		n = start;

		while(n!=NULL)
        {
            printf("%d ",n->data);
            n = n->next;
        }
        printf("\n");
	}

	int pop()
	{
	    /*pop out last node in the linked list and returns the data value of the last node*/
	    int last_ele;
		Node *n = start;
		for(int i=0; i<this->max_index-1;i++)
        {
            n = n->next;
        }
        n->next = NULL;

        last_ele = this->end_node->data;

        delete(this->end_node);
        this->end_node = n;

        this->max_index-=1;

        return last_ele;
	}

	void reverse_list_method1()
	{
	    int data;
	    int iterations = this->max_index;
	    LinkedList *temp_linked_list = new LinkedList();

        for(int i=0;i<=iterations;i++)
        {
            data = this->pop();
            temp_linked_list->append(data);
        }
        this->start = temp_linked_list->start;
        this->end_node  = temp_linked_list->end_node;
        this->max_index = temp_linked_list->max_index;
	}

	void reverse_list()
	{
	    LinkedList *temp_linked_list = new LinkedList();

	    Node *n = start;

	    while(n!=NULL)
        {
            temp_linked_list->push(n->data);
            n = n->next;
        }

        this->start = temp_linked_list->start;
        this->end_node  = temp_linked_list->end_node;
        this->end_node->next = NULL;
        this->max_index = temp_linked_list->max_index;
        printf("\nmaxIndex:%d\n",max_index);
	}
	int length()
	{
	    int len = 0;
	    Node *n = start;
	    while(n!=NULL)
        {
            len+=1;
            n = n->next;
        }

        return len;
	}
	void delete_data_at_idx(int index)
	{
	    /*delete data from linked list at provided index
	    Argument:
            index -- int type, index value at which data has to be removed
	    */

	    Node *n = start;
	    Node *temp = new Node();

	    for(int i=0;i<index-1;i++)
        {
            n = n->next;
        }

	}
};

int main()
{
    LinkedList *linked_list  = new LinkedList();
    linked_list->show_list();
    linked_list->append(36);
    linked_list->push(12);
    linked_list->append(48);
    linked_list->insert_at(1,24);
    cout<<"Expected output1:12 24 36 48\n";
    linked_list->show_list();

    cout<<"Expected output2:0 12 24 36 48\n";
    linked_list->insert_at(0,0);
    linked_list->show_list();

    cout<<"Expected output3:-12 0 12 24 36\n";
    linked_list->insert_at(0,-12);

    cout<<linked_list->pop()<<"\n";
    linked_list->show_list();

    linked_list->append(36);
    linked_list->push(12);
    linked_list->append(48);
    linked_list->insert_at(1,24);
    cout<<"Expected output1:12 24 -12 0 12 24 36 36 48\n";
    cout<<"\nlength:"<<linked_list->length()<<"\n";
    linked_list->show_list();
    linked_list->reverse_list();
    cout<<"\nlength:"<<linked_list->length()<<"\n";
    linked_list->show_list();
}
