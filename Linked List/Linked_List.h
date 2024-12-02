#include <iostream>
using namespace std;

// OOP

class Node
{    
public:
    int data;
    Node* next;

    // Node(int value);
};

class Linked_list:public Node
{
private:
    Node* head;
public:

    bool isempty();
    void insertfirst(int newitem);
    void display();    
    int count();
    bool isfound(int item);

    Linked_list();        // Constructor
    ~Linked_list();       // Deconstructor
};
