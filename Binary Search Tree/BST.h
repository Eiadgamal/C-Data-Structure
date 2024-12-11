#include <iostream>
using namespace std;

// OOP

class Node
{    
public:
    int data;
    Node* left, *right;

    Node(int value);
    Node();
};

class BST:public Node
{
// private:

public:

    Node* root;

    Node* insert(Node* Rnode , int item);                 // Insert node and it's value
    void insert(int item);
    void preorder(Node* Rnode);
    void inorder(Node* Rnode);
    void postorder(Node* Rnode);

    Node* search(Node* node , int key);
    bool search(int key);

    Node* Findmin(Node* node);
    Node* Findmax(Node* node);

    Node* Delete(Node* node , int item);

    BST();        // Constructor
    ~BST();       // Deconstructor
};
