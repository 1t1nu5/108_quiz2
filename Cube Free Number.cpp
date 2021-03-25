#include <stdio.h>
int main()
{
	int number = 2, input, check, test;
	scanf("%d", &input);
	if (input == 1)
	{
		printf("1");
		return 0;
	}
	else
	{
		check = 2;
		while (check <= input)
		{
			test = check;
			for (int i = 2; i <= test; i++)
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
