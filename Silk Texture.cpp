#include <stdio.h>
int main()
{
	int line, col, code;
	int command[3];
	scanf("%d", &line);
	scanf("%d", &code);
	int cloth[line][70] = {} // line, column
	for (int i = 0; i < line; i++)
	{
		for (int j = 0; j < 70; j+++)
		{
			cloth[i][j] = 'o';
		}
	}
	while (code > 0)
	{
		scanf("%d %d %d", &command[0], &command[1], &command[2]);
		code--;
	}
	return 0;
}
