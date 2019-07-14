#include<stdio.h>

void getdata(void);
void display(void);

struct Book
{
	char title[50], author[50], genre[50];
}var;
int main()
{
	getdata();
	printf("\nEntered values are:\n\n");
	display();
	return 0;
}

void getdata(void)
{
	printf("Enter the Title of the book: ");
	scanf("%s", &var.title);
	printf("Enter the Author of the book: ");
	scanf("%s", &var.author);
	printf("Enter the genre of the book: ");
	scanf("%s", &var.genre);
}

void display(void)
{
	printf("Title: %s\n", var.title);
	printf("Author: %s\n", var.author);
	printf("Genre: %s\n", var.genre);
}
