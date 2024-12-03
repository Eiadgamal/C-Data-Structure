#include <iostream>
#include "Linked_List.h"
using namespace std;

Node::Node(){
    data = 0;
    next = NULL;
}

Node::Node(int value){
    data = value;
    next = NULL;
};

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
    // Node* newnode;                              // Create new node
    Node* newnode = new Node(newitem);
    // newnode->data = newitem;                    // insert data to new node
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
        if (temp->data == item)
        {
            return true;
        }
    temp = temp->next;
    }
    return false;
};


void Linked_list::insertbefore(int itembefore, int newvalue){
    Node* newnode = new Node(newvalue);
    Node* temp = head;
    if (isfound(itembefore))
    {
        while (temp != NULL && temp->next->data != itembefore)
        {
            temp = temp->next;
        }
        newnode->next = temp->next;         // el next bta3 el new node hyshawr 3l temp.next
        temp->next = newnode;               // el temp.next hyshawr 3l new node
    }
    else
    {
        cout << "item is not found you cannot add before this item" << endl;
    }
    
};

void Linked_list::append(int item){
    Node* temp = head;
    Node* newnode = new Node(item);
    if (isempty())
    {
        insertfirst(item);
    }
    else
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
        newnode->next = NULL;
    }
};

void Linked_list::Delete(int item){
    Node* delptr = head;
    Node* prevptr = NULL;
    if (isempty())
        cout << "You can not delete because List is empty ! " << endl;
    if (delptr->data == item)
    {
        delptr = delptr->next;
        delete delptr;
    }
    else
    {
        while (delptr->data != item)
        {
            prevptr = delptr;
            delptr = delptr->next;
        }
        prevptr->next = delptr->next;
        delete delptr;        
    }      
};