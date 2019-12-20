
// Sample code to perform I/O:

#include <iostream>

using namespace std;

int main() {
	int n,p,q,temp;
	cin >> n;
	for(int i=0;i<n;i++)
	{
	    cin >> p >> q;
	    int x[p],count=0;
	    for(int j=0;j<p;j++)
	    {
	        cin >> x[j];
	        temp = q-x[j];
	        if(count < temp)
	          {
	              count = temp;
	          }
	    }
	      cout << count << endl;
	}
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail


// Write your code here
