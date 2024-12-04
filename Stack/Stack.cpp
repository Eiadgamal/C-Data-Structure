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
    head = NULL;
};

Stack::~Stack(){
    // hello
};
