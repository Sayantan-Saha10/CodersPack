#include<stdio.h>

int main()
{
	int num,i;
	printf("Enter the desired number for the multiplication table: ");
	scanf("%d", &num);
	for (i = 1; i <= 10; i++)
	{
		printf("%d x %d = %d\n", num, i, i*num);
	}
	return 0;
}
