
// Sample code to perform I/O:

#include <iostream>

using namespace std;

int main() {
	int num,flag;
	cin >> num;
	int a[num];// Reading input from STDIN
	for(int i=0;i<num;i++)
	{
	    cin>>a[i];
	}
	for(int i=0;i<num-1;i++)
	{
	    flag = 0;
	   for(int j=i+1;j<num;j++)
	      {
	            if(a[j]>a[i])
	            {
	                flag = 1;
	                break;
	            }
	      }
	      if(flag==0)
	      cout << a[i] << " ";
	}
	cout << a[num-1];
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail


// Write your code here
