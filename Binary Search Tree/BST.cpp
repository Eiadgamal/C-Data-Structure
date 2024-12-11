#include <iostream>
#include "BST.h"
using namespace std;

Node::Node(){
    data = 0;
    left = right = NULL;
}

Node::Node(int value){
    data = value;
    left = right = NULL;
};

BST::BST(){
    root = NULL;
};

BST::~BST(){
    // hello
};

Node* BST::insert(Node* Rnode , int item){
    Node* newnode = new Node(item);
    if (Rnode == NULL)                      // tree is empty
    {
        Rnode = newnode;
    }
    else if (item < Rnode->data)
    {
        Rnode->left = insert(Rnode->left,item);
    } 
    else
    {
        Rnode->right = insert(Rnode->right,item);
    }
    return Rnode;
};

void BST::insert(int item){
    root = insert(root,item);
};

void BST::preorder(Node* Rnode){            // root,left,right
    if (Rnode == NULL)
    {
        return;
    }
    else
    {
        cout << Rnode->data << endl;
        preorder(Rnode->left);
        preorder(Rnode->right) ;
    }
    
};


void BST::inorder(Node* Rnode){            // left,root,right
    if (Rnode == NULL)
    {
        return;
    }
    else
    {
        inorder(Rnode->left);
        cout << Rnode->data << endl;
        inorder(Rnode->right) ;
    }
    
};

void BST::postorder(Node* Rnode){            // left,right,root
    if (Rnode == NULL)
    {
        return;
    }
    else
    {
        inorder(Rnode->left);
        inorder(Rnode->right);
        cout << Rnode->data << endl;
    }
    
};

Node* BST::search(Node* node , int key){
    if (node == NULL)
    {
        return NULL;
    }
    else if (key == node->data)
    {
        return node;
    }
    else if (key < node->data)
    {
        return search(node->left,key);
    }
    else
    {
        return search(node->right,key);
    }   
};


bool BST::search(int key){
    Node* result = search(root,key);
    return (result != NULL);
};

Node* BST::Findmin(Node* node){
    if (node == NULL)
    {
        return NULL;
    }
    else if (node->left == NULL)
    {
        return node;
    }
    else
    {
        return Findmin(node->left);
    }
    
};

Node* BST::Findmax(Node* node){
    if (node == NULL)
    {
        return NULL;
    }
    else if (node->right == NULL)
    {
        return node;
    }
    else
    {
        return Findmax(node->right);
    }    
};


Node* BST::Delete(Node* node , int item){
	if (node == NULL)
	{
		return NULL;
	}
	
	if (item < node->data)
	{
		node->left = Delete(node->left,item);
	}
	else if (item > node->data)
	{
		node->right = Delete(node->right,item);
	}
	else			// remove root note there is 3 cases 1(it's a leaf node)/ 2(have one child)/ 3(have 2 children)
	{
		if (node->left == NULL && node->right == NULL)
		{
			node = NULL;
		}
		else if (node->left != NULL && node->right == NULL)			// one child on left side
		{
			node->data = node->left->data;
			delete node->left;
			node->left = NULL; 	
		}
		else if (node->left == NULL && node->right != NULL)			// one child on right side
		{
			node->data = node->right->data;
			delete node->right;
			node->right = NULL; 	
		}
		else														// node have 2 children
		{
			Node* max = Findmax(node->left);
			node->data = max->data;
			node->left = Delete(node->left,max->data);
		}		
	}
	return node;

};



