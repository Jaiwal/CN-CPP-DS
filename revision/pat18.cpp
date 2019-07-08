
#include<iostream>
using namespace std;

int main()
{

   /*  int n;
    cin>>n;

    int i=1;
    while(i<=n)
    {
        int j=1;
        char ch='A';
        while(j<=n)
        {
            cout<<ch;
            ch++;
            j++;
        }



        i++;
        cout<<endl;
    } */


    int n;
    cin>>n;

    int i=1;
    while(i<=n)
    {
        int j=1;

        while(j<=n)
        {
            int ch='A'+j-1;
            cout<<ch;

            j++;
        }



        i++;
        cout<<endl;
    }
}
