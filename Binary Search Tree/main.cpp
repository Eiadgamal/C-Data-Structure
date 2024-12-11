#include <iostream>
#include "BST.cpp"
using namespace std;

int main()
{
    cout << "Binary tree ADT Demo " << endl;
	BST b;
	b.insert(45);
	b.insert(15);
	b.insert(79);
	b.insert(90);
	b.insert(10);
	b.insert(55);
	b.insert(12);
	b.insert(20);
	b.insert(50);

	cout << "Display PRE_ORDER " << endl;
	b.preorder(b.root);
	// cout << "Display IN_ORDER " << endl;
	// b.inorder(b.root);
	// cout << "Display POST_ORDER " << endl;
	// b.postorder(b.root);	

	cout << "Search " << endl;	
	if (b.search(90))
	{
		cout << "Found " << endl;
	}
	else
	{
		cout << " NOT Found " << endl;
	}
		

	cout << "FIND MINIMUM " << endl;
	Node* min = b.Findmin(b.root);
	if (min == 0)
	{
		cout << "No item exist" << endl;
	}
	else
	{
		cout << "Min is " << min->data << endl;
	}




	Node* max = b.Findmax(b.root);
	if (max == 0)
	{
		cout << "No item exist" << endl;
	}
	else
	{
		cout << "Max is " << max->data << endl;
	}	

	cout << "DELETE" << endl;
	Node* result = b.Delete(b.root,12);

	cout << "Display PRE_ORDER after DELETE" << endl;
	b.preorder(result);	

	
};


