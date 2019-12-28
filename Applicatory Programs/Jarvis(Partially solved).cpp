
// Sample code to perform I/O:

#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
	int test,i=0;
	cin >> test;
level:	while(i<test)
	{
	    int num;
	    cin >> num;

	  int n=0,tempH=0,tempL=10;
	    int *A,B[10]={0};
	    A=(int *)malloc(1000000*sizeof(int));
 level2:while(num>=10)
	    {
	       A[n]=num%10;
	        if(A[n]==0)
	        {
	            num=num/10;
	            goto level2;
	        }
	        B[A[n]]++;

	        if(B[A[n]]>1)
	           {
	               cout << "NO" << endl;
	               i++;
	               goto level;
	           }
	        if(tempH<A[n])
	            tempH=A[n];
	        if(tempL>A[n])
	            tempL=A[n];
	        num=num/10;
	        n++;
	    }
	    A[n]=num;
	    if(A[n]==0)
	    {
	        n--;
	        goto level3;
	    }
	    B[A[n]]++;

	        if(B[A[n]]>1)
	        {
	               cout << "NO" << endl;
	               i++;
	               goto level;
	        }
	    if(tempH<A[n])
	            tempH=A[n];
	    if(tempL>A[n])
	            tempL=A[n];

	  level3:  if(tempH-tempL!=n)
	        cout << "NO" << endl;
	    else
	       cout << "YES" << endl;
	   i++;
	}
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail


// Write your code here
