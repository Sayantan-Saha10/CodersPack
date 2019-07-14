#include<stdio.h>

int main()
{
	int choice;
	printf("----------Temparature Conversion--------------\n");
	while (1)
	{
		printf("Enter your choice: 1) Celcius to Fahrenite conversion 2) Fahrenite to Celcius conversion 3) Exit\n");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
		{
			float celcius, fahreneit;
			printf("Enter the temparature in Celcius: ");
			scanf("%f", &celcius);
			fahreneit = ((9 * celcius) / 5) + 32;
			printf("The temparature in Fahreneit is %f\n", fahreneit);
			break;
		}
		case 2:
		{
			float celcius, fahreneit;
			printf("Enter the temparature in Fahreneit: ");
			scanf("%f", &fahreneit);
			celcius = ((fahreneit - 32) * 5) / 9;
			printf("The temparature in Celcius is %f\n", celcius);
			break;
		}
		case 3:
			exit(-1);
			break;
		default:
			printf("Invalid choice\n");
		}
	}
	return 0;
}
