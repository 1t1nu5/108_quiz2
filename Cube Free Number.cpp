#include <stdio.h>
#include <stdbool.h>
int notmain();
int main()
{
	int x;
	loop:
		x = notmain();
		goto loop;
}
int notmain()
{
	int input, number = 1, check = 2;
	bool skip;
	printf("\n");
	scanf("%d", &input);
	if (input == 1)
	{
		printf("1");
		return 0;
	}
	else
	{
		while (check <= input)
		{
			skip = false;
			int test = check;
			for (int i = 2; i < check; i++)
			{
				if (i*i*i > test)
				{
					break;
				}
				if (test % (i*i*i) == 0)
				{
					skip = true;
				}
			}
			if (skip == false)
			{
				number++;
			}
			else if (skip == true && check == input)
			{
				printf("Not Cube Free");
				return 0;
			}
			check++;
		}
	}
	printf("%d", number);
	return 0;
}
