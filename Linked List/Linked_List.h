#include <iostream>
using namespace std;

// OOP

class Node
{    
public:
    int data;
    Node* next;
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
    // int getLength();
    // int search(int key);
    // void append(int newItem);    // new item fe akhr mkan fel array / void 3shan bahot msh bashof (msh ba return haga)
    // void insert(int idx , int idxValue);
    // void Delete(int idx);
    // void Enlarge(int newsize);     // Ha3ml array gdeda b7agm akpar bs lazm pointer yeshawer 3l adema
    // void Merge(Array otherArr);     // Hayedeny array wna ha3ml merge hadakhl el old+new fe array wahda

    Linked_list();        // Constructor
    ~Linked_list();       // Deconstructor
};
