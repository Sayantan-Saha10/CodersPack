#include<stdio.h>

int main()
{
	int i,j,temp,n,num[100];
	printf("How many numbers you want to enter in the array? ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
    {
        printf("Enter the number %d: ",i+1);
        scanf("%d",&num[i]);
    }
	for (i = 0; i < n-1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (num[i] > num[j])
			{
				temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}

		}
	}
	printf("Largest number is %d\n", num[n-1]);
	printf("Smallest number is %d\n", num[0]);
	system("PAUSE");
	return 0;
}
