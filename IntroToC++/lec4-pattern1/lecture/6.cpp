#include<iostream>
using namespace std;

int main(){

   int n;
   cin>>n;

   int i=1;
   //int ch='A';
   while(i<=n){
    int j=1;
      while(j<=n){
            int ch='A'+j-1;
        cout<<ch;

        j++;
      }

      cout<<endl;
      i++;
   }





}

