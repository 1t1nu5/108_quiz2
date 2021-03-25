#include <stdio.h>
#include <stdbool.h>
int main()
{
	int input, number = 2, check = 2;
	bool skip;
	scanf("%d", input);
	if (input == 1)
	{
		printf("1");
	}
	else
	{
		while (check <= input)
		{
			skip = false;
			int test = check;
			for (int i = 2; i < check; i++)
			{
				if (test % i == 0)
				{
					test /= i;
					if (test % i == 0)
					{
						test /= i;
						if (test % i == 0)
						{
							skip = true;
						}
					}
				}
			}
			if (skip == false)
			{
				number++;
			}
			else if (skip == true; check == input)
			{
				printf("Not Cube Free");
				return 0;
			}
			check++;
		}
	}
	return 0;
}
