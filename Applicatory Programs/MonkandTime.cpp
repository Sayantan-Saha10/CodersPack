
// Sample code to perform I/O:

#include <iostream>

using namespace std;

int main() {
	int num,count=0,temp,j,k=0,i=0;
	cin >> num;
	int A[num],B[num];// Reading input from STDIN
	for(int i=0;i<num;i++)
	{
	    cin >> A[i];
	}
	for(int i=0;i<num;i++)
	{
	    cin >> B[i];
	}
	while(i!=num)
	{
	    level: j=k;
	    if(B[i]!=A[j])
	    {
	        temp=A[j];
	        count++;

	        while(j!=num)
	        {
	            A[j]=A[j+1];
	            j++;
	        }
	        A[j-1]=temp;
	        j=k;
	        goto level;
	    }
	    else
	    {
	        k++;
	        count++;

	        i++;
	    }
	}
	cout << count;
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail


// Write your code here
