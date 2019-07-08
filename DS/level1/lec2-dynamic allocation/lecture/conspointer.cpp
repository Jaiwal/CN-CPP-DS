#include<iostream>
using namespace std;



int main()
{
    int i=10;
    int j=21;

   int const * p=&i;

   p=&j; //allowed hai as m jisko point kkr rha usse nhi chng krunga pr khusko to kr skta na

   //agr pointer m b ni chng krna

   int * const p2=&i;

   //p2=&j; yh ni kr kste

   (*p2)++; //possible



   int const * const p4=&i; //cant do

}


