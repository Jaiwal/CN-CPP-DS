#include<iostream>
using namespace std;

void bubbleSort(int input[],int n){

   for(int i=0;i<n-1;i++)
    {


      for(int j=0;j<n-i-1;j++)
      {
        if(input[j]>input[j+1])
            {
               int temp=input[j];
               input[j]=input[j+1];
                input[j+1]=temp;
            }

       }

    }

}


int main()
{



    int input[]={2,13,48,1,3,6,28};

    bubbleSort(input,7);
    for(int i=0;i<7;i++)
    {
        cout<<input[i]<<" ";
    }

}

