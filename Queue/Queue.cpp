#include <iostream>
#include "Queue.h"
using namespace std;

Node::Node(){
    data = 0;
    next = NULL;
}

Node::Node(int value){
    data = value;
    next = NULL;
};

Queue::Queue(){
    front = NULL;
    back = NULL;
};

Queue::~Queue(){
    // hello
};


bool Queue::isempty(){            // to check if Queue is empty or not
    return (front == NULL); 
};

void Queue::display(){
    Node* temp = front;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
};

int Queue::count(){
    int counter;
    Node* temp = front;
    while (temp != NULL)
    {
        counter++;
        temp = temp->next;
    }
    return counter;
};

bool Queue::isfound(int item){
    Node* temp = front;
    bool found = false;
    while (temp != NULL)
    {
        if (temp->data == item)
        {
            found = true;
        }
    temp = temp->next;
    }
    return found;
};

void Queue::Enqueue(int item){
    Node* newnode = new Node(item);                         // el new node btb2a el akhera 
    if (isempty())                                          // first node
    {
        newnode->next = NULL;
        front = back = newnode;                            // front always points to first node of Queue (top node)                          
    }
    else
    {
        back->next = newnode;
        back = newnode;

    }  
};

// int Dequeue();

int Queue::Dequeue(){
    Node* delfront = front;
    int delvalue = -1;                  // return -1 if it does not work
    if (isempty())
    {
        cout << "You cannot Dequeue an empty Queue " << endl;                    
    }
    else if (front == back)
    {
        delete front;
        front = back = NULL;
    }
    else
    {
        front = front->next;
        delvalue = front->data;
        delete delfront;
    } 
    return delvalue; 
};

int Queue::getFront(){
    return front->data;
};

int Queue::getBack(){
    return back->data;
};

void Queue::Clear(){
    while (!isempty())
    {
        Dequeue();
    }
    
};



