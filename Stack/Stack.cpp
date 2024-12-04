#include <iostream>
#include "Stack.h"
using namespace std;

Node::Node(){
    data = 0;
    next = NULL;
}

Node::Node(int value){
    data = value;
    next = NULL;
};

Stack::Stack(){
    top = NULL;
};

Stack::~Stack(){
    // hello
};


bool Stack::isempty(){            // to check if Stack is empty or not
    return (top == NULL);
};

void Stack::display(){
    Node* temp = top;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
};

int Stack::count(){
    int counter;
    Node* temp = top;
    while (temp != NULL)
    {
        counter++;
        temp = temp->next;
    }
    return counter;
};

bool Stack::isfound(int item){
    Node* temp = top;
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

void Stack::push(int item){
    Node* newnode = new Node(item);
    if (isempty())
    {
        newnode->next = NULL;
        top = newnode;                          // Top always points to first node of stack (top node)
    }
    else
    {
        newnode->next = top;
        top = newnode;
    }  
};

void Stack::pop(){
    Node* deltop = top;
    if (isempty())
    {
        cout << "You cannot pop an empty stack " << endl;                    
    }
    else
    {
        top = top->next;
        delete deltop;
    }  
};

int Stack::peek(){
    return top->data;
};

bool Stack::isFull(){
    Node* ptr = new Node();
    bool full = false;
    if (ptr == NULL)
    {
        cout << "The Stack is Full - You can not add another item " << endl;
        full = true;
    }
    return full;
};



