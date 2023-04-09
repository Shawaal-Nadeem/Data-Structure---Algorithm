#include"List.h"

int main()
{
	const int s = 28;
	char ar[s] = { 'W','a','s',' ','i','t',' ','a',' ','c','a','r',' ','o','r',' ','a',' ','c','a','t',' ','I',' ','s','a','w'};
	List obj(ar, s);
	for (int i = 0; ar[i] != '\0'; i++)
	{
		obj.push(ar[i]);
	}

	obj.display();
	obj.checkPalindrome();
	return 0;
}
