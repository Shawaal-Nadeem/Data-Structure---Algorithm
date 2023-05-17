#include "LinkedList.h"

int main()
{
	LinkedList ll;

	ll.add("Samsung", 1000);
	ll.add("Huawei", 850);
	ll.add("iPhone", 500);
	ll.add("Samsung", 950);
	ll.add("Samsung", 150);
	ll.add("Pixel", 450);
	ll.add("iPhone", 600);
	ll.add("iPhone", 950);
	
	cout << "Before sort: " << endl;
	ll.display();

	cout << endl << "After sort: " << endl;
	ll.sort();
	ll.display();

	cout << endl << "After removing duplicates: " << endl;
	ll.removeDuplicates();
	ll.display();


	return 0;
}