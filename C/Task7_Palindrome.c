#include<stdio.h>

int main()
{
	char str[30] = { 0 }, revstr[30] = { 0 };
	int i = 0, n, p, j = 0;
	printf("Enter a string: ");
	scanf("%s", &str);
	for (n = 0; str[n] != '\0'; n++);
	p = n;
	while (i < p)
	{
		revstr[n - 1] = str[i];
		i++;
		n--;
	}
	while (j < p)
	{
		if (str[j] != revstr[j])
		{
			printf("Not a palindrome string!!\n");
			return 0;
		}
		j++;
	}
	printf("Palindrome string!!\n");
	return 0;
}
