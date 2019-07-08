#include<iostream>
#include<cmath>

using namespace std;

int main(){

    int N;
    cin>>N;
    int rem,ans=0;
int base=1;
    while(N>0)
    {
        rem=N%10;
        ans=ans+rem*base;
        N=N/10;
        base*=2;;


    }
    cout<<ans;








}
