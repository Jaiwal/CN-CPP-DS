
#include<iostream>
using namespace std;

int main()
{

    int n;
    cin>>n;

    int m=1,i=1;
    while(i<=n)
    {

        int k=1;
        while(k<=n-i)
        {
            cout<<" ";
            k++;
        }




        int j=1;
        while(j<=i)
        {
            cout<<m;
            m++;
            j++;
        }



        i++;
        cout<<endl;
    }
}


