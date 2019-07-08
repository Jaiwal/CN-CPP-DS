
#include<iostream>
using namespace std;

int main()
{
  int n;
  cout<<"Enter the no\n";
  cin>>n;

  int i=1,m=1;
  while(i<=n){
    int j=1;
    while(j<=i){
        cout<<m;
        m+=1;
        j+=1;

    }
    cout<<endl;
    i+=1;
  }


}

