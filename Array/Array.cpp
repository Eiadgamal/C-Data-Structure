#include <iostream>
#include "Array.h"
using namespace std;

Array::Array(){
    // hello
};

Array::~Array(){
    // hello
};

Array::Array(int arrsize){
    size = arrsize;
    length = 0;
    items = new int[arrsize];             // de el array
};


void Array::fill(){
    int no_of_items;
    cout << "How many items you want to fill? \n";
    cin >> no_of_items;
    if (no_of_items > size)
    {
        cout << "Array Exceeded \n";
        return;
    }
    else
    {
        for (int i = 0; i < no_of_items; i++)
        {
            cout << "Enter item number : " << i << endl;
            cin >> items[i];                                // 7ot el values fel array (fill)
            length++;
        }   
    }
};

void Array::display(){
    cout << "Display Array Content" << endl;
    for (int i = 0; i < length; i++)
    {
        cout <<items[i]<<endl;
    }   
};

int Array::getSize(){
    return size;
};

int Array::getLength(){
    return length;
};

int Array::search(int key){
    int index = -1;
    for (int i = 0; i < length; i++)
    {
        if (key==items[i])
        {
            index = i;
            cout << "Your Key is Found in index : " << index << endl;
            break;
        }
        cout << "Your Key is Not Found " << endl;           
    }
    return index;
};

void Array::append(int newItem){
    if (length < size)
    {
        items[length] = newItem ;
        length++;
    }
    else
    {
        cout << "You Cannot Add new item the Array is Full" << endl;
    }                   
};

void Array::insert(int idx , int idxValue){
    if (idx >= 0 && idx < size)
    {
        for (int i = length; i > idx ; i--)
        {
            items[i] = items[i-1];
        }
        items[idx] = idxValue;
        length++;
    }
    else 
    {
        cout << "Index Value out of range from the size of array" << endl;
    }    
};

void Array::Delete(int idx){
        if (idx >= 0 && idx < size)
    {
        for (int i = idx; i < length-1 ; i++)
        {
            items[i] = items[i+1];          // ahot fe item[5] vaue item[6]  supposing we want to delet item[5]
        }
        length--;
    }
    else 
    {
        cout << "Index Value out of range from the size of array" << endl;
    }
};

void Array::Enlarge(int newsize){
    if (newsize <= size)
    {
        cout << "New Size must be larger than the old one" << endl;
    }
    else 
    {
        size = newsize;
        int* temp = items;          // temp is pointer copy el array el adem
        items = new int[newsize];
        for (int i = 0; i < length; i++)
        {
            items[i]=temp[i];       // hotely fel array el gded (items) values ellly fel array el adema(temp)
        }
        delete[]temp;
    }
};

void Array::Merge(Array otherArr){
    int* temp = items;
    int NewArrSize = size + otherArr.getSize();             
    items = new int[NewArrSize];
    int i;
    for (int i = 0; i < length; i++)
    {
        items[i]=temp[i];
    }
    int j = i;
    delete[]temp;
    for (int i = 0; i < otherArr.getLength(); i++)
    {
        items[j++] = otherArr.items[i];
        length++;
    }    
};