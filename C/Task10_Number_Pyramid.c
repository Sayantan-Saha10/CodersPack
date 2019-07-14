#include<stdio.h>

int main()
{
	int i, j, n=5;
	printf("-----Number Pyaramid-----\n\n");

	for (i = 0; i < 5; i++)
	{
		for (j = 1; j <= n; j++)
		{
			printf("%d", j);
		}
		printf("\n");
		n--;
	}
	return 0;
}
