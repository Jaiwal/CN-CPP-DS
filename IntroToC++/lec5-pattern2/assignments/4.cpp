#include<iostream>
using namespace std;

int main(){

  int n;
  cin>>n;


  int i=1;
  while(i<=n){
      int space=1;
      while(space<=n-i){
        cout<<" ";
        space+=1;
      }
      int j=1;
      int m=i;
      while(j<=i){
        cout<<m;
        m++;
        j+=1;
      }
      m--;
      j=i-1;
      while(j>=1){
            m--;
        cout<<m;
        j-=1;
      }




    cout<<endl;
    i+=1;
  }





}

