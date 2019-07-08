#include<iostream>
using namespace std;
#include"StudentC.cpp"

int main()
{
   StudentC s1(100,21); //error yhi ajana as iske bnte hi default value se initialize hojayenge member that is garbage values but in 3rd line we are changing values which should not be allowed since const bnaya hai
   s1.age=20;
   //s1.rollNo=101;




}


