#include<iostream>

using namespace std;

void swap(int *x, int *y);
int main()
{
	int a,b;
	cout << "Enter the value of variable a: ";
	cin >> a;
	cout << "Enter the value of variable b: ";
	cin >> b;
	swap(&a, &b);
	cout << "After swapping" << endl;
	cout << "The value of variable a is " << a << endl;
	cout << "The value of variable b is " << b << endl;
	return 0;
}

void swap(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
