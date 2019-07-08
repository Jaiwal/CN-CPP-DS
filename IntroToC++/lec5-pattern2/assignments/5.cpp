#include<iostream>
using namespace std;
int main(){


/* int rows;
    cin>>rows;
    int i,j,k=0,n;
    n=(rows+1)/2;
    for( i=1;i<=rows;i++){
            i<=n?k++:k--;
        for(j=1;j<=rows;j++){

            if(j>=n+1-k&&j<=n-1+k){
                cout<<"*";

            }
            else{
                cout<<" ";
            }
        }

        cout<<endl;
    }

    */




    int n;

    cin>>n;


    int n1=n/2+1;

    for(int i=1;i<=n1;i++)
        {

        for(int j=1;j<=n1-i;j++)
            {
               cout<<" ";
            }
        for(int j=1;j<2*i-1;j++)
            {
               cout<<"*";
            }
        cout<<endl;
       }

    int n2=n-n1;
    for(int i=n2;i>=1;i--)
        {

        for(int j=1;j<=n1-i;j++)
            {
             cout<<" ";

            }
        for(int j=1;j<=2*i-1;j++)
            {
              cout<<"*";

            }
         cout<<endl;
        }
}




