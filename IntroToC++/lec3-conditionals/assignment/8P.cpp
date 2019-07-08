#include<iostream>
using namespace std;

int main()
{

 int S,E,w;
 cin>>S;
 cin>>E;
 cin>>w;


 long C=0,F=S;

 while(F<=E){
    C= (5.0/9)*(F-32);
    cout<<F<<"\t"<<C;
    cout<<"\n";
    F=F+w;

 }









}
