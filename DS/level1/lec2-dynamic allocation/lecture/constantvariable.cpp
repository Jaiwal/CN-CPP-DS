#include<iostream>
using namespace std;

int main()
{
    const int i=10;
   //int const i=10;


   //const ref from a non const int
    int j=12;
    const int & k=j;
    k++;  //can not do it
    j++;


    //

    int const j2=12;
    int const &k2=j2;
    //j2++,k2++ nhi kr kste





    //ref from const integer

    int const j3=123; //write ki access h ni
    int &k3=j3;  //isse kese dedega

}
