#include"myLinkedList.h"

int main()
{
	myLinkedList obj;
	obj.insertAtFront(2);
	obj.insertAtEnd(3);
	obj.insertAtEnd(4);
	obj.deleteAtEnd();

	obj.display();
	cout << endl;
	cout << "Front value : " << obj.front() << endl;
	cout << "End Value : " << obj.end() << endl;
	cout << endl;
	cout << obj.empty() << endl;
	cout << endl;
	cout << "Size of List : " << obj.size() << endl;
	return 0;
}