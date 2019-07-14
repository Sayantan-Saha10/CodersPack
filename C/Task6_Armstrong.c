#include<stdio.h>

int main()
{
	int num, a[30], b[30], i = 0, j, k, m[30], s=0,p;
	printf("Enter the number: ");
	scanf("%d", &num);
	p = num;
	while (num >= 10)
	{
		a[i] = num % 10;
		num = num / 10;
		i++;
	}
	a[i] = num;
	for (j = 0; j <= i; j++)
	{
	    m[j]=1;
		for (k = 0; k <= i; k++)
		{
			m[j] = m[j] * a[j];
		}
		s = s + m[j];
	}
	if (s == p)
	{
		printf("Its an Armstrong number!!\n");
	}
	else
	{
		printf("Its not an Armstrong number!!\n");
	}
	return 0;
}
