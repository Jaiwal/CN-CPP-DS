#include<iostream>
using namespace std;
#include"StudentB.cpp"

int main()
{
    char name[]="abcd";
    StudentB s1(20,name);
    s1.display();


    StudentB s2(s1);

    s2.name[0]='x';
    s1.display();
    s2.display();


}

