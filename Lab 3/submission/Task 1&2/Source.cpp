#include"myStack.h"

int main()
{
	char arr[5];
	myStack obj(arr, 5, -1);
	char ch='y';
	while (ch == 'Y' || ch=='y')
	{

		int choice;
		cout << "1.	Press 1 to add a new item to the stack." << endl;
		cout << "2.	Press 2 to remove and return the last element from the stack." << endl;
		cout << "3.	Press 3 to check if the stack is full." << endl;
		cout << "4.	Press 4 to check if the stack is empty." << endl;
		cout << "5.	Press 5 to return the size of the stack." << endl;
		cout << "6.	Press 6 to display the stack." << endl;
		cout << "7.	Press 0 to exit." << endl;
		cout << endl;
		cout << "Enter Choice : ";
		cin >> choice;
		cout << endl;
		if (choice == 1)
		{
			char ch;
			cout << "Enter Character you wanna Push on Stack : ";
			cin >> ch;
			obj.Push(ch);
			cout << ch << " pushed on Stack" << endl;
		}
		else if (choice == 2)
		{
			cout << obj.Pop() << " remove from Stack";
		}
		else if (choice == 3)
		{
			if (obj.full() == false)
			{
				cout << "Stack is not Full" << endl;
			}
		}
		else if (choice == 4)
		{
			if (obj.empty() == false)
			{
				cout << "Stack is not Empty" << endl;
			}
		}
		else if (choice == 5)
		{
			cout << "Number of Elements in Stack are : " << obj.size() << endl;
		}
		else if (choice == 6)
		{
			obj.display();
		}
		else if (choice == 0)
		{
			cout << "Exit" << endl;
		}
		else
		{
			cout << "Invalid Input" << endl;
		}
		cout << endl;
		cout << endl;
		cout << "Again (Y/y) or (N/n) : ";
		cin >> ch;
	}


	return 0;
}