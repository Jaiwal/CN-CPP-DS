#include<iostream>
using namespace std;

void g(int const * a){

a++; //nhi kr skte usne kha bhjde mujhe copy nhi bnani pdegi nd m nhi krunga chng as const likh diya nam mene apne aage
}
void f(int const *p)
{
    (*p)++; //error dega
}
int main()
{

    int const i=10;

    int const * p=&i; //change nhi krega yh islith isko b const bnao,by const promise kr rha h ki chng nhi krunga

int j=12;
 int * p3=&j;
f(p);





int const *p2=&j;  //allowed h pr krega nhi vo


}

