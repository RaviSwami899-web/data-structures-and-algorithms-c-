#include<iostream>
#include<bits/stdc++.h>

using namespace std;

struct node{
    int data;
    struct node* next;

    node(){
        this->next = NULL;
    }

    node(int data){
        this->data = data;
        this->next = NULL;
    }
};

class linkedList{
private:
    struct node* head;

public:
    linkedList(){
        this->head == NULL;
    }

    void append(int data){
        if(this->head == NULL){
            this->head = new node(data);
        }

        else{
            node * a = this->head;
            node *temp = new node(data);
            while(a->next!=NULL){
                a = a->next;
            }
            a->next = temp;
        }
    }

    void printList(){
        if(this->head==NULL){
            std::cout<<"list is empty"<<endl;
        }
        else{
            node *a = head;
            while(a!=NULL){
                std::cout<<a->data<<" ";
                a = a->next;
            }
        }
    }
};



int main(){
    linkedList *l1 = new linkedList();

    l1->printList();
    l1->append(1);
    l1->append(2);
    l1->append(3);
    l1->append(4);
    l1->printList();
}
