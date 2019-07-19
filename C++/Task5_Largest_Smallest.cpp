#include<iostream>

using namespace std;

int main()
{
	int num[30],n,temp;
	cout << "Enter the limit of the array: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Enter the value " << i + 1 << ": ";
		cin >> num[i];
	}
	for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++)
			if (num[i] > num[j])
			{
				temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
	cout << "The largest element is " << num[n-1] << endl;
	cout << "The smallest element is " << num[0] << endl;
	return 0;
}
