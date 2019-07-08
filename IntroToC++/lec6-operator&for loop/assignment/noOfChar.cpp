#include<iostream>
using namespace std;

int main()
{
    char m[10000];
 int   character=0,digit=0,whitespace=0;
 for(int i=0;i<10000;i++)
 {

     if(97<=m[i]<=122)
     {
         character++;
     }
     else if(48<=m[i]<=57)
     {
         digit++;
     }
     else(0<=m[i]<=47||58<=m[i]<=127&&m[i]!=36)
     {
         whitespace++;
     }
     cout<<character<" "<<digit<<" "<<whitespace;

 }
}
