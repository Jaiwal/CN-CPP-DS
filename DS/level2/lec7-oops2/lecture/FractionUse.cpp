
#include<iostream>
using namespace std;
#include "Fraction.cpp"
int main()
{
    Fraction f1(10,2);
    Fraction f2(15,4);

    Fraction const f3;
    cout<<f3.getDenominator()<< " "<<f3.getNumerator()<<endl

   f3.setDenominator(10);

}
