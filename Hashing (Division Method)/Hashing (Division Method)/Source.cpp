#include"Hashing.h"


int main()
{
	Hashing obj(10);           //we pass 10 beacuse we use k mod 10 formula, if we use k mod 6 then we pass 6.
	obj.insert(24);
	obj.insert(52);
	obj.insert(91);
	obj.insert(67);
	obj.insert(48);
	obj.insert(83);
	obj.display();
	
	return 0;
}