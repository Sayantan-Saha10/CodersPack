#include<stdio.h>

int main()
{
	int english, maths, science,total,average;
	printf("---------Test Marks----------\n\n");
	printf("Enter the marks of English: ");
	scanf("%d", &english);
	printf("Enter the marks of Maths: ");
	scanf("%d", &maths);
	printf("Enter the marks of Science: ");
	scanf("%d", &science);
	total = english + maths + science;
	average = total / 3;
	printf("The total marks obtained is %d \nThe average marks obtained is %d \n", total, average);
	return 0;
}
