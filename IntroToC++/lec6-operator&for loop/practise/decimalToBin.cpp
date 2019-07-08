/*


#include <iostream>
using namespace std;
int main()
{
long a[100000], n, i;

cin>>n;
for(i=0; n>0; i++)
{
a[i]=n%2;
n= n/2;
}

for(i=i-1 ;i>=0 ;i--)
{
cout<<a[i];
}
}

*/










#include<iostream>
#include<cmath>

using namespace std;

int main(){

    int N,i;
    cin>>N;
    int rem;
    long ans=0;
long pv=1;
    while(N>0)
    {
       rem=N%2;
       ans=ans+rem*pv;
       pv*=10;
       N=N/2;

    }
    cout<<ans;








}

