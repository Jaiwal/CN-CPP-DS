#include<iostream>
using namespace std;
bool isPrime(int n)
{
    int d=2;
    while(d<n){
    if(n%d==0)
       {
        return false;
      }
      d++;
    }
    return true;
}
int main()
{

   cout<<isPrime(31);








}
