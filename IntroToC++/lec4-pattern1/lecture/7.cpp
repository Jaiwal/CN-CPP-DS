#include<iostream>
using namespace std;

int main(){

   int n;
   cin>>n;

   int i=1;
   //int ch='A';
   while(i<=n){
    int j=1;
      cahr StartingChar='A'+i-1;
      while(j<=n){
            int ch=StartingChar+j-1;
        cout<<ch;

        j++;
      }

      cout<<endl;
      i++;
   }





}

