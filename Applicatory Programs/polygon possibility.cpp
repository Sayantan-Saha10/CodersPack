
// Sample code to perform I/O:

#include <iostream>

using namespace std;

int main() {
	int test;
	cin >> test;
	for(int i=0;i<test;i++)
	{
	    int num;
	    cin >> num;
	    int B[num],c=0,total=0;
	    for(int i=0;i<num;i++)
	    {
	        cin >> B[i];
	        if(B[i]>=c)
	        {
	            c=B[i];
	        }
	    }
	    for(int i=0;i<num;i++)
	    {
	        if(B[i]==c)
	        {
	           continue;
	        }
	        total = total + B[i];
	    }
	    if(c<total)
	    cout << "Yes" << endl;
	    else
	    cout << "No" << endl;
	}
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail


// Write your code here
