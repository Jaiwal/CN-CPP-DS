#include<iostream>
using namespace std;

void Rotate(int arr[],int d,int size)
{

    int temp, i=0,j;

    while(i<d)
    {
        temp=arr[0];
        j=0;
        while(j<size)
        {
            arr[j]=arr[j+1];
            j++;
        }

        arr[size-1]=temp;

       i++;



    }


}




int main()
{
    int a[6]={1,3,5,6,9,11};


    Rotate(a,2,6);
    for(int i=0;i<6;i++)
        cout<<a[i]<<" ";


}

