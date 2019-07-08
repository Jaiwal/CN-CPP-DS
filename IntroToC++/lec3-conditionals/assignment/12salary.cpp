using namespace std;
#include <cmath>
#include<iostream>
int main() {
	// Write your code here


   double totS,basic;
   char ch;
   cin >> basic;
   cin >> ch;

   double hra=basic*0.2;
   double da=basic*0.5;
   double pf=basic*0.11;
   int allow;

   if(ch=='A')
    allow=1700;

    if(ch=='B')
    allow=1500;

    if(ch=='C')
    allow=1300;


     totS=basic+hra+da+allow-pf;
      int m=totS;
    cout<<ceil(m);










}
