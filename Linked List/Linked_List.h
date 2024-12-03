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
    void insertbefore(int itembefore, int newvalue);
    void append(int item);                              // append is to add item at last index of the list
    void Delete(int item);

    Linked_list();        // Constructor
    ~Linked_list();       // Deconstructor
};
