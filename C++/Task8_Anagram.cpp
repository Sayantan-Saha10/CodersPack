#include<iostream>

using namespace std;

int main()
{
	char a[30], b[30];
	int i = 0, j, p, flag;
	cout << "Enter the first string: ";
	cin >> a;
	cout << "Enter the second string: ";
	cin >> b;
	while (a[i] != '\0')
	{
		j = 0;
		flag = 0;
		while (b[j] != '\0')
		{
			if (a[i] == b[j])
			{
				p = j;
				while (b[p] != '\0')
				{
					b[p] = b[p + 1];
					p++;
				}
				flag = 1;
			}
			j++;
		}
		if (flag == 0)
		{
			cout << "Its not an Anagram" << endl;
			return 0;
		}
		i++;
	}
	cout << "The string is an Anagram" << endl;
	return 0;
}
