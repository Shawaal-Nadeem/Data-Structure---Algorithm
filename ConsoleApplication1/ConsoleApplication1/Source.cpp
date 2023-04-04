#include"List.h"

int main()
{
	int arr[5];
	List obj(arr, 5);
	obj.push(12);
	obj.push(90);
	obj.push(78);
	obj.push(43);
	obj.push(30);

	obj.pop();
	obj.pop();

	cout << "Number of Elemets in stack are : " << obj.num_Of_Elemets() << endl;
	cout << endl;
	obj.display();

	return 0;
}