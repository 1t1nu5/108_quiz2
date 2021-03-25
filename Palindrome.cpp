#include <stdio.h>
int main()
{	
	int limit, digit = 1;
	scanf("%d", &limit);
	for (int i = 1; i <= limit; i++)
	{
		if (digit == 1 && i >= 10)
		{
			digit = 2;
		}
		else if (digit == 2 && i >= 100)
		{
			digit = 3;
		}
		else if (digit == 2 && i >= 1000)
		{
			digit = 4;
		}
		else if (digit == 2 && i >= 10000)
		{
			digit = 5;
		}
		else if (digit == 2 && i >= 100000)
		{
			digit = 6;
		}
		else
		{
			digit = 7;
		}
		if (digit == 1)
		{
			printf("%d ", i);
		}
		else if (digit == 2)
		{
			if (it/10 == i%10)
			{
				printf("%d ", i);
			}
		}
		else if (digit == 3)
		{
			if (i/100 == i%10)
			{
				printf("%d ", i);
			}
		}
		else if (digit == 4)
		{
			if (i/1000 == i%10)
			{
				int check = i;
				check -= i/1000 + i%10;
				check /= 10;
				if (check/10 == check%10)
				{
					printf("%d ", i);
				}
			}
		}
		else if (digit == 5)
		{
			if (i/10000 == i%10)
			{
				int check = i;
				check -= i/10000 + i%10;
				check /= 10;
				if (check/100 == check%10)
				{
					printf("%d ", i);
				}
			}
		}
		else if (digit == 6)
		{
			if (i/100000 == i%10)
			{
				int check = i;
				check -= i/100000 + i%10;
				check / 10;
				if (check/1000 == check%10)
				{
					check -= check/1000 + check%10;
					check /= 10;
					if (check/10 == check%10)
					{
						printf("%d ", i);
					}
				}
			}
		}
		else
		{
			if (i/1000000 == i%10)
			{
				int check = i;
				check -= i/1000000 + i%10;
				check / 10;
				if (check/10000 == check%10)
				{
					check -= check/10000 + check%10;
					check /= 10;
					if (check/100 == check%10)
					{
						printf("%d ", i);
					}
				}
			}
		}
	}
	return 0;
}
