#include<iostream>
using namespace std;
int main()
{
   int n;
   cin>>n;

   int k, i=1;
   int j=1;


   for(i=1;i<=n;i++)
    {
        k = i;
        for(j=1;j<=i;j++,k++)
        {
            cout<<(char)(k+64);
        }
         cout<<"\n";
    }






}
