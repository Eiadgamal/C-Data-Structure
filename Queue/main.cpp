#include <iostream>
#include "Queue.cpp"
using namespace std;

int main()
{
    cout << "Queue ADT Demo " << endl;
    Queue q;
	for (int i = 1; i <= 3; i++)
	{
		int item;
		cout << "Enter Item to Enqueue \n";
		cin >> item;
		q.Enqueue(item);
	}
	q.display();

	q.Dequeue();
	cout << "After deque \n";
	q.display();
	q.Dequeue();
	q.display();
	
	cout << "Clear All items \n";
	q.Clear();
	cout << "Display after clear \n";
	q.display(); 




   
};