#include "List.h"


char*List::deepCopy(char*p)
{
	int length = strlen(p);
	char*temp = new char[length + 1];
	for (int i = 0; i < length; i++)
	{
		temp[i] = p[i];
	}
	temp[length] = '\0';
	return temp;
}
List::List()
{
	arr = nullptr;
	size = 0;
	top = -1;
}
List::List(char*arrP, int s)
{
	arr = deepCopy(arrP);
	size = s;
	top = -1;
}
List::~List(){}
List::List(const List&obj)
{
	this->arr = deepCopy(obj.arr);
}
void List::push(char data)
{
	if (isFull() == true)
	{
		cout << "Overflow" << endl;
	}

	top++;
	arr[top] = data;
}
void List::display()
{
	for (int i = 0; i <= top; i++)
	{
		cout << arr[i] << " ";
	}
}

char List::pop()
{
	if (isEmpty() == true)
	{
		cout << "Underflow" << endl;
		return 0;
	}

	int val = arr[top];
	top--;
	return val;
}
bool List::isEmpty()
{
	if (top == -1)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool List::isFull()
{
	if (top == size - 1)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int List::num_Of_Elemets()
{
	int num = top + 1;
	return num;
}

int precedence(char op)
{
	if (op == '*' || op == '/' || op == '%')
	{
		return 2;
	}
	else if (op == '+' || op == '-')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void List::infix_to_postfix(char*inf_arr)
{
	char stack_arr[4];
	List stack_obj(stack_arr, 4);
	char postArr[8];
	int count = 0;
	for (int i = 0; inf_arr[i]!='\0'; i++)
	{
		if (inf_arr[i] >= 'A'&&inf_arr[i] <= 'Z' || inf_arr[i] >= 'a'&&inf_arr[i] <= 'z' || inf_arr[i] >= '0' && inf_arr[i] <= '9')
		{
			postArr[count] = inf_arr[i];
			count++;
		}
        else if (inf_arr[i] == '(')
		{
			stack_obj.push(inf_arr[i]);
		}
	}

	int count1 = count + 1;
	for (int i = 0; i < 8; i++)
	{
		if (inf_arr[i] == '+' || inf_arr[i] == '-' || inf_arr[i] == '*' || inf_arr[i] == '/' || inf_arr[i] == '%')
		{
			if (precedence(stack_obj.arr[i]) > precedence(stack_obj.arr[top]))
			{
				cout << stack_obj.arr << endl;
				/*cout<< stackObj.pop()<<endl;
				postArr[count1] = temp;
				count1++;*/
			}
			else if (precedence(stack_obj.arr[i]) < precedence(stack_obj.arr[top]))
			{
				cout << "Hello" << endl;
				stack_obj.push(inf_arr[i]);
			}
		}
	}

	int count2 = count1+1;
	for (int i = 0; i < 8; i++)
	{
		 if (inf_arr[i] == ')')
		{
			while (arr[top] != '(')
			{
				postArr[count2] = arr[top];
				count2++;
				stack_obj.pop();
			}
			stack_obj.pop();
		}
	}
	//cout << postArr << endl;
}