


#include<iostream>
using namespace std;

int main()
{

    int n;
    cin>>n;

    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
           if(j==1&&i==1)
           {
               cout<<"1";
           }
           else if(j==1||j==i)
           {
               cout<<"1";
           }
           else
            cout<<"2";
            j++;
        }



        i++;
        cout<<endl;
    }
}
