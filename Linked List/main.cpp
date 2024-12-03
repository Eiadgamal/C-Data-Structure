#include <iostream>
#include "Linked_List.cpp"
using namespace std;

int main()
{
    cout << "Linked List ADT Demo " << endl;
    Linked_list ll;
    if (ll.isempty())
    {
        cout << "How many items you want to add ?  " << endl;
        int itemnumbers;
        cin >> itemnumbers; 
        for (int i = 0; i < itemnumbers; i++)
        {
            cout << "Enter item you want to add " << endl;
            int item;
            cin >> item;
            ll.insertfirst(item);
        }
        ll.display();
        cout << "List contains " << ll.count() << " item" << endl; 
    }
    else
    {
        cout << "List is not empty , you cannot add items " << endl; 
    }

// Check insertbefore func   
    cout << "Enter item you want to add new item before it " << endl;
    int itembefore;
    cin >> itembefore;
    cout << "Enter new item " << endl;
    int newitem;
    cin >> newitem;
    ll.insertbefore(itembefore,newitem);
    ll.display();

// Check append func
    cout << "Enter item you want to append " << endl;
    int itemappend;
    cin >> itemappend;
    ll.append(itemappend);
    ll.display();

// Check delete func
    cout << "Enter item you want to delete " << endl;
    int itemdelete;
    cin >> itemdelete;
    ll.Delete(itemdelete);
    ll.display();    
};