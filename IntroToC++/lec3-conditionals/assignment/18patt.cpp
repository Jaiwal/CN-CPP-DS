#include<iostream>
using namespace std;

int main()
{

    int n,i,j;
    cin>>n;

   for(i=1;i<=n;i++)
    {   int m=1;
       for(j=1;j<=n;j++)
       {
            if(j<=(n+1-i))
             {

                 cout<<m;
                 m++;
             }

       }

        cout<<endl;
    }
}


