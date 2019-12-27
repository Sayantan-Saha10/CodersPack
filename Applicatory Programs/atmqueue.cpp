
// Sample code to perform I/O:

#include <iostream>

using namespace std;

int main() {
	int num,count=0;
	cin >> num;
	int A[num];
	for(int i=0;i<num;i++)
	{
	    cin >> A[i];
	}
	for(int i=0;i<num;i++)
	{
	    if(A[i]>A[i+1]&&(i!=(num-1)))
	    {
	        count++;
	    }
	}
	if(count==0)
	{
	    cout << "1";
	    return 0;
	}

	cout << count+1;
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail


// Write your code here
