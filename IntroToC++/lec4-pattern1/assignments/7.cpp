#include<iostream>
using namespace std;
int main()
{
   int n;
   cin>>n;

   int k, i=1;
   int j=1;


   for(i=0;i<n;i++)
    {
        k = n-i;
        for(j=0;j<=i;j++,k++)
        {
            cout<<(char)(64+k);
        }
         cout<<"\n";
    }






}

