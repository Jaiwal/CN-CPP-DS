
#include<iostream>
using namespace std;

int main()
{

    int n;
    cin>>n;

    int i=1;
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
            cout<<"*";
            j++;
        }



        j=i-1;
        while(j>=1)
        {
            cout<<"*";
            j--;
        }




        i++;
        cout<<endl;
    }
}
