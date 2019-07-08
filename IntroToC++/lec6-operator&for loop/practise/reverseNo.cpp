#include<iostream>
using namespace std;

int main()
{
  int N;
  cin>>N;
  int revNo=0,Remainder;
   while(N>0)
   {
       Remainder=N%10;
       revNo=revNo*10+Remainder;
       N=N/10;
   }
   cout<<revNo;


}

