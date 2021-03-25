#include <stdio.h>
int main()
{
	int line, col, code;
	int command[3];
	scanf("%d", &line);
	scanf("%d", &code);
	while (code > 0)
	{
		scanf("%d %d %d", &command[0], &command[1], &command[2]);
		code--;
	}
	return 0;
}
