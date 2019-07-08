#include<iostream>
using namespace std;
void print(int* p)
{
    cout<<*p<<endl;
}
void incrementPointer(int* p)
{
    p=p+1;
}
void increment(int* p)
{
    *p=*p+1;
}
int main()
{
    int i=10;
    int *p=&i;
    cout<<p<<endl;
//incrementPointer(p);
increment(p);
    cout<<*p;

}

