
#include<iostream>
using namespace std;

int main()
{

    int n;
    cin>>n;

    int i=1;
    while(i<=n)
    {
        int j=1,m=i;
        while(j<=i)
        {
            cout<<m;
            m--;
            j++;
        }



        i++;
        cout<<endl;
    }
}
