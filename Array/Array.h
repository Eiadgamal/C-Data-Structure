#include <iostream>
using namespace std;

// OOP

class Array
{
private:
    int size;
    int length;               
    int* items;
public:

    Array(int arrsize);
    void fill();
    void display();    
    int getSize();
    int getLength();
    int search(int key);
    void append(int newItem);    // new item fe akhr mkan fel array / void 3shan bahot msh bashof (msh ba return haga)
    void insert(int idx , int idxValue);
    void Delete(int idx);
    void Enlarge(int newsize);     // Ha3ml array gdeda b7agm akpar bs lazm pointer yeshawer 3l adema
    void Merge(Array otherArr);     // Hayedeny array wna ha3ml merge hadakhl el old+new fe array wahda

    Array();        // Constructor
    ~Array();       // Deconstructor
};