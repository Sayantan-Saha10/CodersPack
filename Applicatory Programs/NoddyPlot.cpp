#include<iostream>

using namespace std;

main()
{
    int n,houseNum[30],pos[30],temp,temp1[30],houseName1,houseName2,flag=0;
    cout << "Enter the number of houses: ";
    cin >> n;
    for (int i=0;i<n;i++)
    {
        cin >> houseNum[i] >> pos[i];
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
           {
               if(houseNum[i]>houseNum[j])
               {
                   temp=houseNum[i];
                   houseNum[i]=houseNum[j];
                   houseNum[j]=temp;

                   temp=pos[i];
                   pos[i]=pos[j];
                   pos[j]=temp;
               }
           }
    }

    for(int i=0;i<n-1;i++)
    {
     temp1[i]=pos[i+1]-pos[i];
     if(temp1[i]<0)
     {
         temp1[i]=-temp1[i];
     }
    }

    for(int i=1;i<n-1;i++)
    {
       if(temp1[0]<temp1[i])
       {
           houseName1=houseNum[i];
           houseName2=houseNum[i+1];
           temp1[0]=temp1[i];
           flag=1;
       }
       else if(flag==0)
       {
           houseName1=houseNum[0];
           houseName2=houseNum[1];
       }
    }
    cout << houseName1 << " " << houseName2 << endl;
}
