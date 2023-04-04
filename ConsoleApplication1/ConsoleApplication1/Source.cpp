#include"List.h"

int main()
{
	char stack_arr[10];
	char post_arr[18];
	List stack_obj(stack_arr, 10);

	
	char inf_arr[18] = { '(', '2', '-', '(', '9', '/', '3', ')', '*', '2', '+', '5', ')', '*', '9', '%', '5' };
	cout << "Enter Infix Expression : " << inf_arr << endl;
	cout << endl;
	int count = 0;
	for (int i = 0; i < 18; i++)
	{
		if (inf_arr[i] == '(')
		{
			stack_obj.push(inf_arr[i]);
		}
		else if (inf_arr[i] == ')')
		{
			for (int j = stack_obj.top; stack_arr[j] == '('; j--)
			{
				stack_obj.pop();
			}
		}
		else
		{
			post_arr[count] = inf_arr[i];
			count++;
		}
	}


	cout << post_arr << endl;

	return 0;
}