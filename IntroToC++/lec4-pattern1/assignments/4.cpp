#include<iostream>
using namespace std;
int main()
{

    int n;
    cin>>n;

    int i,j;

    for(i=1;i<=n;i++){
             int m=i;
        for(j=1;j<=i;j++){
            cout<<m;
            m--;
        }
        cout<<endl;
    }
}



