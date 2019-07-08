#include<iostream>
using namespace std;

int main()
{

int N;
cin>>N;

int sum=0;

 int i=1;
 while(i<=N){


    if(i%2==0){
        sum=sum+i;
    }
    i++;
 }

 cout<<sum;




}
