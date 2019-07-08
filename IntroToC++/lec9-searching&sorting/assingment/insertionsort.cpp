#include<iostream>
using namespace std;

void insertionSort(int arr[],int n){

    for (int i = 1; i < n; i++)
    {
       int current = arr[i];
        int j;
        for(j=i-1;j>=0;j--)
        {
            if(current<arr[j])
                arr[j+1]=arr[j];
            else
                break;
        }

       arr[j+1]=current;
    }


    }




int main()
{



    int input[]={2,13,48,1,3,6,28};

    insertionSort(input,7);
    for(int i=0;i<7;i++)
    {
        cout<<input[i]<<" ";
    }

}


