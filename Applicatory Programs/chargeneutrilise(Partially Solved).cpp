
// Sample code to perform I/O:

#include <iostream>

using namespace std;

int process (char* A, int num);
int main() {
	long num;
	cin >> num;
	char *A;
	A= (char *)malloc(num * sizeof(*A));
	for(long i=0;i<num;i++)
	{
	    cin >> A[i];
	}
	process(A, num);
	return 0;
}

int process (char* A, int num)
{
    long count,j,k,l=0,s=0;
    char *C;
    C=(char *)malloc(num * sizeof(*C));
    for(long i=0;i<num;i++)
    {
        count=1;
        if(A[i]==A[i+1])
        {
            j=i+1;
            while(A[i]==A[j])
            {
                count++;
                j++;
            }
           i=j-1;
        }

        if(count%2!=0)
        {
            C[l]=A[i];
            l++;
        }
    }

    while(C[s]!='\0')
    {
        if(C[s]==C[s+1])
        {
            process(C, l);
            return 0;
        }
        s++;
    }

    cout << l << endl;
     for(long i=0;C[i]!='\0';i++)
    {
        cout << C[i];
    }
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail


// Write your code here
