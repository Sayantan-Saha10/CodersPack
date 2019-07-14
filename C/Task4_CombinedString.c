#include<stdio.h>

int main()
{
	char name[30] = { 0 }, surname[30] = { 0 };
	int i, j = 0;
	printf("Enter the name: ");
	scanf("%s", &name);
	printf("Enter the surname: ");
	scanf("%s", &surname);
	for (i = 0; name[i] != '\0'; i++);
	while (surname[j] != '\0')
	{
		name[i] = surname[j];
		i++;
		j++;
	}
	printf("Your full name is %s\n", name);
	return 0;
}
