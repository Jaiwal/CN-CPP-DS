#include <iostream>
using namespace std;


int sum(int input[], int n) {
 if(n==0)
    return 0;


   int SmallSum=sum(input+1,n-1);

   return input[0]+SmallSum;

}

int main()
{
    int a[]={2,3,4,5,6,6,6};
    int x=sum(a,7);
    cout<<x;
}
