
#include<iostream>
using namespace std;

int main()
{

    int n;
    cin>>n;

    int i=1;
    char ch='A';
    while(i<=n)
    {
        int j=1;
        char m='A'+i-1;
        while(j<=n)
        {
           char ch=m+j-1;
            cout<<ch;
            j++;
        }



        i++;
        cout<<endl;
    }
}
