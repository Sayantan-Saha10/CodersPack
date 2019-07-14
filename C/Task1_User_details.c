#include<stdio.h>

int main()
{
	char name[30];
	int age, phonenumber;
	printf("Enter your Name: ");
	scanf("%s", &name);
	printf("Enter your age: ");
	scanf("%d", &age);
	printf("Enter your Phone Number: ");
	scanf("%d", &phonenumber);
	printf("Your name is %s\n", name);
	printf("Your age is %d\n", age);
	printf("Your Phone Number is %d\n", phonenumber);
	return 0;
}
