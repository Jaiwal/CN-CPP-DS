
#include <string.h>
#include<iostream>
using namespace std;
int length(char input[])
{
    int count=0;
    for(int i=0;input[i]!=0;i++)
    {
        count++;
    }
    return count;
}

void reverseString(char input[])
{
    int len=length(input);
    int i=0,j=len-1;
    while(i<j)
    {
        char temp=input[i];
        input[i]=input[j];
        input[j]=temp;
        i++;
        j--;
    }

}



void reverseEachWord(char input[]) {

    int len=length(input);
    reverseString(input);


    // Write your code here

     int start=0,end=0;
     char temp;
     for(int i=0;i<=len;i++)
     {

         if(input[i]==' '||i==len)
         {
            end=i-1;


            while(start<end)
                {
                   temp=input[start];
                   input[start]=input[end];
                input[end]=temp;

                 start++;
                 end--;
               }
            start=i+1;
         }


     }






}

int main(){

   // char arr[100]="People are shit";
    //reverseString(arr);
   char arr[100];
   cin.getline(arr,20);
   reverseEachWord(arr);
    cout<<arr;
}
