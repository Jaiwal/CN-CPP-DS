#include<iostream>
using namespace std;
#include <climits>
#include<cmath>


int main(){

    // Write your code here
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(n==0||n==1)
    {
        cout<<-pow(2,31);
    }

    int max=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>=max)
            max=a[i];
    }

    for(int j=0;j<n;j++)
    {
        a[j]=max-a[j];
    }

}



