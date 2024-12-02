#include <iostream>
#include "Linked_List.cpp"
using namespace std;

int main()
{
    cout << "Linked List ADT Demo " << endl;
    Linked_list ll;
    if (ll.isempty())
    {
        cout << "Linked List is empty " << endl;
        cout << "Enter item you want to add " << endl;
        int item;
        cin >> item;
        ll.insertfirst(item);        
    }
    else
    {
        cout << "List contains " << ll.count() << endl;
        for (int i = 0; i < 3; i++)
        {
            cout << "Enter item you want to add " << endl;
            int item;
            cin >> item;
            ll.insertfirst(item);
        }
        ll.display();
    }
cout << "List contains " << ll.count() << endl;    

};