#include<iostream>
using namespace std;

void reverse_of_Number(int x)
{
	int y = x / 10;
	x = x % 10;
	if (y == 0)
	{
		cout << x;
		return;
	}
	cout << x << " ";
	reverse_of_Number(y);
}
int main()
{
	int num = 8971;
	reverse_of_Number(num);
	cout << endl;
	return 0;
}