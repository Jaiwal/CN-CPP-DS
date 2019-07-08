#include<iostream>
using namespace std;

int main()
{
  int x;
  cin>>x;
  int n=1;
  int count=0;
  int i;
  while(x>0)
  {
      int term=3*n+2;
      if(term%4!=0)
      {
          cout<<term<<" ";
          count++;
      }

      n++;
      if(count==x){
        break;
      }
  }



}

