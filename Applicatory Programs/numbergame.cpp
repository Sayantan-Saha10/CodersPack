#include<iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int A[N];
    for(int i=0;i<N;i++)
    {
        cin >> A[i];
    }
    int i=0,j,k,flag,flag1;
    while(i<N)
    {
        if(i==N-1)
        {
            cout << "-1" << endl;
            break;
        }
        flag=0;
        j=i+1;
        while(A[i]>=A[j])
        {
            if(j>=N-1)
            {
                flag=1;
                break;
            }
          j++;
        }
        if(flag==0)
        {
            flag1=0;
            k=j+1;
            while(A[j]<=A[k])
            {
                if(k>=N-1)
                {
                    flag1=1;
                    break;
                }
                k++;
            }
            if(flag1==0)
              cout << A[k] << " ";
              else
              cout << "-1 ";
        }
        else
          cout << "-1 ";

          i++;
    }
}
