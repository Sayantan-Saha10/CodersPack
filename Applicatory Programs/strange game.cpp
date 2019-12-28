
// Sample code to perform I/O:

#include <iostream>

using namespace std;

int main() {
	int test;
	cin >> test;
	for(int i=0;i<test;i++)
	{
	    long long num,timestamp,ref=0,sum=0;
	    cin >> num >> timestamp;
	    int A[num],B[num],count[num]={0};
	    for(int j=0;j<num;j++)
	       cin >> A[j];
	    for(int j=0;j<num;j++)
	    {
	       cin >> B[j];
	       if(B[j]>ref)
	          ref=B[j];
	    }
	    for(int j=0;j<num;j++)
	    {
	        if(A[j]<=ref)
	        {
	            while(A[j]<=ref)
	            {
	                A[j]++;
	                count[j]++;
	            }
	        }
	        sum=sum+count[j];
	    }
	    cout << sum*timestamp << endl;
	}

}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail


// Write your code here
