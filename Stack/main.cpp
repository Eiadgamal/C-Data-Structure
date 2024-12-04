#include <iostream>
#include "Stack.cpp"
using namespace std;

int main()
{
    cout << "Stack ADT Demo " << endl;
    Stack ss;
    if (ss.isempty())
    {
        cout << "How many items you want to add ?  " << endl;
        int itemnumbers;
        cin >> itemnumbers; 
        for (int i = 0; i < itemnumbers; i++)
        {
            cout << "Enter item " << endl;
            int item;
            cin >> item;
            ss.push(item);
        }
        ss.display();
    }
    else
    {
        cout << "Stack is not empty , you cannot add items " << endl; 
    }
cout << "POP" << endl; 
ss.pop();
ss.display();
cout << "Peek " << endl;
ss.peek();    
cout << "item to search for" << endl;
int itemm;
cin >> itemm;
ss.isfound(itemm);
cout << "is FULL ?" << endl;
ss.isFull();
cout << "Stack contains " << ss.count() << " item" << endl; 




   
};