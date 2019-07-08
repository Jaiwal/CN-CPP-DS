#include<iostream>
using namespace std;

int main()
{

    char name[100];
    cout<<"Enter Name"<<"  ";
    cin>>name;
    name[4]='x';
    name[3]='d'; //since added delibrately now look for null character after the given input and added one
    cout<<name;
}
