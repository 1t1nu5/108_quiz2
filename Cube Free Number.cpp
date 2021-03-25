#include <stdio.h>
int main()
{
	int number = 1, input, check, test;
	loop:
		printf("\n");
	scanf("%d", &input);
	if (input == 1)
	{
		printf("1");
		goto loop;
		return 0;
	}
	else
	{
		check = 1;
		while (check < input)
		{
			no:
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
								goto no;
							}
						}
					}
				}
				number++;
		}
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
						goto loop;
						return 0;
					}
				}
			}
		}
		printf("%d", number);
		goto loop;
		return 0;
	}
}
