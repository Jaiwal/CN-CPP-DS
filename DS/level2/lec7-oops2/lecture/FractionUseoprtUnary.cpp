#include<iostream>
using namespace std;
#include"FractionOprtUnary.cpp"
int main()
{
    Fraction f1(10,2);
    Fraction f2(15,4);


  /*  f1.print();
   Fraction f3= ++(++f1);
    f1.print();
    f3.print();
    //++f1;
    //f1.print(); */
   f1.print();
  Fraction  f3=++f1;
  f1.print();
f3.print();




   /* Fraction f3=f1.add(f2);
    Fraction f4=f1+f2;

    f1.print();
    f2.print();
    f3.print();
    f4.print();

    Fraction f5=f1*f2;
    f5.print();
    if(f1==f2)
        cout<<"equal";
    else
        cout<<"not equal";  */

}
