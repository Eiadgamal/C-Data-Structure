#include <iostream>
#include "Linked_List.h"
using namespace std;

Linked_list::Linked_list(){
    head = NULL;
};

Linked_list::~Linked_list(){
    // hello
};

bool Linked_list::isempty(){            // to check if Linked List is empty or not
    return (head == NULL);
};

void Linked_list::insertfirst(int newitem){
    Node* newnode;                              // Create new node
    newnode->data = newitem;                    // insert data to new node
    if (isempty())
    {
        newnode->next = NULL;                   // new node points to Null                   
        head = newnode;                         // Head points to new node
    }
    else
    {
        newnode->next = head;                   // new node points to first node(head was pointing on it)
        head = newnode;                         // Head points to new node
    }
    
};

void Linked_list::display(){
    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
};

int Linked_list::count(){
    int counter;
    Node* temp = head;
    while (temp != NULL)
    {
        counter++;
        temp = temp->next;
    }
    return counter;
};

bool Linked_list::isfound(int item){
    Node* temp = head;
    while (temp != NULL)
    {
        if (temp->data = item)
        {
            return true;
            break;
        }
    }
    return false;
};
