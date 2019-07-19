#include<iostream>

using namespace std;

int main()
{
	char a[30];
	int i = 0;
	cout << "Enter the string: ";
	cin >> a;
	while (a[i] != '\0')
	{
		if (a[i] >= 65 && a[i] <= 90)
		{
			a[i] = a[i] + 32;
		}
		i++;
	}
	cout << "The converted string is " << a << endl;
	return 0;
}
