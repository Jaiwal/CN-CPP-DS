
#include<iostream>
using namespace std;

int main()
{

   /*  int n;
    cin>>n;

    int i=1;
    while(i<=n)
    {
        int j=1,m=n;
        while(j<=n)
        {
            cout<<m;
            m--;
            j++;
        }



        i++;
        cout<<endl;
    }
    */
    int n;
    cin>>n;

    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            cout<<n-j+1;

            j++;
        }



        i++;
        cout<<endl;
    }
}

