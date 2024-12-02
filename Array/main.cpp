#include <iostream>
#include "Array.cpp"
using namespace std;

int main()
{
    cout << "Array ADT Demo " << endl;
    cout << "Enter Array size " << endl;

    int arrsize_user;
    cin >> arrsize_user;
    Array myarray(arrsize_user);

    myarray.fill();
    cout << "Array Size is : " << myarray.getSize() << " While Array Length is : " << myarray.getLength() << endl;
    myarray.getSize(); 
    myarray.display();

    cout << "Enter Key to Search for  " << endl;
    int index;
    cin >> index;
    myarray.search(index);

    cout << "Do You Want to Add item ? (yes / no)" << endl;
    string ask;
    cin >> ask;
    cout << "Enter Value you want to append " << endl;
    int value;
    cin >> value;    
    if (ask == "yes") {
        myarray.append(value);
    }
    else
    {
        cout << "Okay , As You Like :) " << endl;
    }
    myarray.getSize(); 
    myarray.display();


    cout << "Enter Index you want to insert " << endl;
    int idx , idxValue ;
    cin >> idx ;
    cout << "Enter Value you want to insert " << endl;    
    cin >> idxValue; 
    myarray.insert(idx,idxValue);
    myarray.display();
    
    cout << "Enter Index you want to delete " << endl;
    int idx ;
    cin >> idx ;
    myarray.Delete(idx);
    myarray.display();

    cout << "Enter newsize " << endl;
    int newsize ;
    cin >> newsize ;
    myarray.Enlarge(newsize);
    myarray.display();

    Array other(6);
    other.fill();
    myarray.Merge(other);
    cout << "Array Size is : " << myarray.getSize() << " While Array Length is : " << myarray.getLength() << endl;    
    myarray.display();

};