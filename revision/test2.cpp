#include<iostream>
using namespace std;

int main()
{

    int  n;
    cin>>n;


    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j<=n-i+1)
                cout<<j;
            else
                cout<<"*";
        }
        int m=n-i+1;
        for(int j=n+1;j<=2*n;j++)
        {
            if(j<=n+i-1)
            {
                cout<<"*";
            }
            else{

            cout<<m;
            m--;
            }

        }






        cout<<endl;
    }






}
