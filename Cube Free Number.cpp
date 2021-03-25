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
		check = 1;
		while (check < input)
		{
			check++;
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
							continue;
						}
					}
				}
			}
			number++;
		}
		if (check < input)
		{
			check++;
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
							printf("Not Cube Free");
						}
					}
				}
			}
		}
	}
	
	return 0;
}
