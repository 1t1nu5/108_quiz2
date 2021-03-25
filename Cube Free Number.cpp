#include <stdio.h>
#include <stdbool.h>
int meow()
{
	printf("meow");
}
int main()
{
	int input, number = 1, check;
	bool skip, first = true;
	printf("\n");
	scanf("%d", &input);
	if (input == 1)
	{
		printf("1");
		return 0;
	}
	else
	{
		revenir:
			while (check < input)
			{
				if (first == true)
				{
					check = input;
				}
				skip = false;
				int test = check;
				for (int i = 2; i < check; i++)
				{
					if (i*i*i > test)
					{
						break;
					}
					else if (test % (i*i*i) == 0)
					{
						skip = true;
					}
				}
				if (skip == false)
				{
					number++;
				}
				else if (first == true)
				{
					if (skip == true)
					{
						printf("Not Cube Free");
						return 0;
					}
					else
					{
						first = false;
						check = 2;
						goto revenir;
					}
				}
				check++;
			}
	}
	printf("%d", number);
	return 0;
}
