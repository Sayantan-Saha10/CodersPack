#include<stdio.h>

int main()
{
	int num,i, s = 1;
	printf("Enter the number: ");
	scanf("%d", &num);
	for (i = 1; i <= num; i++)
	{
		s = s*i;
	}
	printf("The factorial of the number is %d\n", s);
	return 0;
}
