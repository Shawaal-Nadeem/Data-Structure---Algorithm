#include<iostream>
using namespace std;

int findFactorail(int n)
{
	if (n == 1 || n == 0)
	{
		return 1;
	}
	else
	{
		return n*(findFactorail(n - 1));
	}
}

int main()
{
	int num;
	cout << "Enter Number to find Factorial : ";
	cin >> num;
	cout << endl;
	cout << "Factorail of "<<num << " is : " << findFactorail(num) << endl;
	return 0;
}