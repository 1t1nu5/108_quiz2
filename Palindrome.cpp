#include <stdio.h>
int main()
{	
	int limit, digit = 1;
	scanf("%d", &limit);
	for (int i = 1; i <= limit)
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
	}
	return 0;
}
