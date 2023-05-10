#include"myLinkedList.h"

int main()
{
	myLinkedList obj;
	obj.insertAtLast(10);
	obj.insertAtLast(20);
	obj.insertAtLast(30);
	obj.insertAtLast(40);
	obj.insertAtLast(50);
	obj.insertAtLast(60);
	//obj.insertatspecificposition(1,20);
	/*cout << obj.size() << endl;*/
	//cout <<"Removed DaTa : " <<obj.removeatspecificposition(1) << endl;
	obj.rotate_at_Nth_Position(2);
	obj.display();

	return 0;
}