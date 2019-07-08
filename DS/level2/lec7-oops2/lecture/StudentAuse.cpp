#include<iostream>
using namespace std;
#include"StudentA.cpp"

int main()
{
    char name[]="abcd";
    StudentA s1(20,name);
    s1.display();

    name[3]='e';
    StudentA s2(24,name);
    s2.display();
    s1.display();

}
