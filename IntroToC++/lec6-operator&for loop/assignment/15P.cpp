#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;


    int i;
    for(i=2;i<=n;i++){
        int j;
         int flag=0;
        for(j=2;j<=i/2;j++){
                if(i%j==0){
                    flag=1;
                    break;
                }

        }

        if(flag==0){
                cout<<i<<endl;

    }
    }




}








