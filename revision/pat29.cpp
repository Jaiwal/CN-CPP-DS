

#include<iostream>
using namespace std;

int main()
{

    int n;
    cin>>n;

    int n1=n/2+1;


    for(int i=1;i<=n1;i++)
    {

        for(int j=1;j<=n1-i;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++)
        {

            cout<<"*";
        }
        cout<<endl;
    }



    int n2=n-n1;

    for(int i=n2;i>=1;i--)
    {
        for(int j=1;j<=n1-i;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++)
        {
            cout<<"*";
        }

        cout<<endl;

    }
}
