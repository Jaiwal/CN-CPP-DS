#include<iostream>
using namespace std;
void sort012(int arr[],int n)
{
    int j=0,zero=0,one=0,two=0;
    while(j<n)
    {
        if(arr[j]==0){
            zero++;

        }

        if(arr[j]==1)
        {
            one++;

        }
        if(arr[j]==2)
        {
            two++;

        }
          j++;
    }
     cout<<zero<< " "<<one<<" " <<two;

}


int main(){
    int a[7]={0,1,2,0,2,0,1};
    sort012(a,7);

}
