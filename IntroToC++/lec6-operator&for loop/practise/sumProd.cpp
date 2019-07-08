#include<iostream>
using namespace std;

int main()
{

     int N,ch,i,j;
     cin>>N;
     cin>>ch;
     int sum=0,prod=1;
     if(ch==1)
        {
           for(i=1;i<=N;i++)
            {
               sum=sum+i;
            }
          cout<<sum;
        }
     else if(ch==2)
     {

         for(j=1;j<=N;j++)
         {

             prod=prod*j;
         }
         cout<<prod;
     }

     else
        cout<<-1;




}
