
// Sample code to perform I/O:

#include <iostream>

using namespace std;

int main() {
	int street;
	cin >> street;
	for(int i=0;i<street;i++)
	{
	    int num,price,ref,count;
	    cin >> num >> price;
	    int A[num];
	    for(int j=0;j<num;j++)
	    {
	        cin >> A[j];
	    }
	    ref=A[0];
	    count=1;
	    for(int j=1;j<num;j++)
	    {
	        if(A[j]>ref)
	        {
	            count++;
	            ref=A[j];
	        }
	    }
	    cout << price*count << endl;
	}
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail


// Write your code here
