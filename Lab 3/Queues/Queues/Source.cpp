#include"Queues.h"

int main()
{
	const int siz = 5;
	char ar[siz];
	Queues obj(ar, siz);
	obj.push('e');
	obj.push('i');
	obj.push('s');
	obj.push('h');
	obj.push('a');
	obj.display();
	cout << endl;
	cout << "Deleted Elements are : ";
	cout<<obj.pop();
	cout << obj.pop();
	cout << endl;
	cout << endl;
	cout << "After Deleted your Queue is : " << endl;
	obj.display();
	cout << endl;
	int num = obj.numOfElements();
	cout << "Number of Elements in Queue are : " << num << endl;

	return 0;
}