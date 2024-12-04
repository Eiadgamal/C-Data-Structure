#include <iostream>
using namespace std;

// OOP

class Node
{    
public:
    int data;
    Node* next;

    Node(int value);
    Node();
};

class Stack:public Node
{
private:
    Node* top;
public:

    // the first 4 functions is a copy from Linked list (Stack List)
    bool isempty();
    void display();
    int count();
    bool isfound(int item);

    void push(int item);
    void pop();
    int peek();             // who's the top ?
    bool isFull();

    Stack();        // Constructor
    ~Stack();       // Deconstructor
};
