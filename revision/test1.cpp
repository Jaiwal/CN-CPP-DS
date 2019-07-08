#include<iostream>
using namespace std;

int main(){

  // Write your code here
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


        int j=1,m=i;
        while(j<=i)
        {
            cout<<m;
            m--;
            j++;
        }

        j=i-1;
        int x=2;
        while(j>=1)
        {
            cout<<x;
            x++;
            j--;
        }


   cout<<endl;
   i++;










    }

}


