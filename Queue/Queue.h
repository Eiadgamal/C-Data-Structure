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

class Queue:public Node
{
private:
    Node* front;
    Node* back;
public:

    // the first 4 functions is a copy from Linked list (Queue List)
    bool isempty();
    void display();
    int count();
    bool isfound(int item);

    void Enqueue(int item);                 // Insert node at the end of the queue
    int Dequeue();                          // Remove node from the front of the queue
    int getFront();
    int getBack();
    void Clear();

    Queue();        // Constructor
    ~Queue();       // Deconstructor
};
