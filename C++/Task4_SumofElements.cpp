#include<iostream>

using namespace std;

int main()
{
	int a[30],n,s=0;
	cout << "Enter the limit of the array: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Enter the element " << i + 1 << ": ";
		cin >> a[i];
		s = s + a[i];
	}
	cout << "The sum of all the elements is " << s << endl;
	return 0;
}
