#include<iostream>
using namespace std;

int FindSortedArrayRotation(int arr[], int n) {



 int i=0,flag=1;
    while(i<n)
    {
        if(arr[i]<arr[i+1])
            i++;
        else{
            flag=i+1;
            break;
        }
    }
    return flag;
}


int main()
{
    int a[6]={5,6,1,2,3,4};


    cout<<FindSortedArrayRotation(a,6);



}
