
// Sample code to perform I/O:

#include <iostream>

using namespace std;

int main() {
	int test;
	cin >> test;
	for(int i=0;i<test;i++)
	{
	    int num,p,q,r,count=0;
	    cin >> num;
	    cin >> p;
	    cin >> q;
	    cin >> r;
	    for(int i=2;i<=num;i++)
	    {
	        if(i%p==0&&i%q!=0&&i%r!=0||i%q==0&&i%p!=0&&i%r!=0||i%r==0&&i%p!=0&&i%q!=0)
	        {
	            count++;
	        }
	    }
	    cout << count << endl;

	}
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail


// Write your code here
