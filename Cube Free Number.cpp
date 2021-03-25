#include <stdio.h>
int main()
{
	int input, number = 2, check = 2;
	scanf("%d", input);
	if (input == 1)
	{
		printf("1");
	}
	else
	{
		while (number <= input)
		{
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
							
						}
					}
				}
			}
		}
	}
	return 0;
}
