
// Sample code to perform I/O:

#include <iostream>

using namespace std;

int main() {
	int test;
	cin >> test;
	for(int i=0;i<test;i++)
	{
	    int num,k,l=0,num1=0;
	    cin >> num;
	    int A[num],B[num];
	    for(int j=0;j<num;j++)
	    {
	        cin >> A[j];
	    }

	    for(int j=0;j<num;j++)
	    {
	        k=0;
	        if(A[j]%2==0)
	        {
	            num1++;
	            while(A[j]%2==0&&j!=num)
	            {
	                k++;
	                j++;
	            }
	         B[l]=k;
	         l++;
	         j--;
	        }
	    }
	    if(num1==0)
	       cout << "-1" << endl;
	    else
	    {
	        int temp=0;
	        for(int j=0;j<num1;j++)
	        {
	            if(B[j]>temp)
	            {
	                temp=B[j];
	            }
	        }
	       cout << temp << endl;
	    }

	}
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail


// Write your code here
