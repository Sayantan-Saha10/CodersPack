
// Sample code to perform I/O:

#include <iostream>

using namespace std;

int main() {
	int num,ref;
	cin >> num >> ref;
	int A[num],B[num],k,c,j=0;
	for(int i=0;i<num;i++)
	{
	    cin >> A[i];
	}
	for(int i=0;i<num;i++)
	{
	    k=i;
	    c=0;
	    while(k<i+ref)
	    {
	        if(c<A[k])
	        {
	          c=A[k];
	        }
	        k++;
	    }
	    B[j]=c;
	    if(k==num)
	    {
	        break;
	    }
	    j++;
	}
	for(int i=0;i<=j;i++)
	 cout << B[i] << " ";
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail


// Write your code here
