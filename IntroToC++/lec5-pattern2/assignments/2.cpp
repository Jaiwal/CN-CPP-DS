#include<iostream>
using namespace std;

int main()
{

    int n;
    cin>>n;
     int m=n;
    for(int i=1;i<=n;i++){
        for(int j =n;j>=i;j--){

            cout<<m;


        }
        m--;
        cout<<endl;
    }
}



