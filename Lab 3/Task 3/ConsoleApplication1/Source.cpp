#include"List.h"

int main()
{
	char stack_arr[4];
	char post_arr[8];
	List stack_obj(stack_arr,4);

	
	char inf_arr[8] = { '5', '+', '(', '4', '*', '3', ')'};
	cout << "Enter Infix Expression : " << inf_arr << endl;
	cout << endl;
	int count = 0;
	for (int i = 0; i < 8; i++)
	{
		if (inf_arr[i] == '(')
		{
			stack_obj.push(inf_arr[i]);
		}
		 if (inf_arr[i] == ')')
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