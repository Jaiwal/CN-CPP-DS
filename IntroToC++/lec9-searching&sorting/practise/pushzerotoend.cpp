#include<iostream>
using namespace std;

void PushZeroesEnd(int arr[], int n){
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * No need to return or print the output.
     * Taking input and printing output is handled automatically.
     */













     int c=0;
  for(int i=0;i<n;i++)
  {
    if(arr[i]!=0)
      {
      arr[c]=arr[i];
      c++;
    }
  }
  while(c<n)
  {
    arr[c]=0;
    c++;
  }

  int i;
  for(i=0;i<n;i++)
  {
      cout<<arr[i]<<" ";
  }


}
  /* int i=0,j=0,temp;
while(j<n){
        if(arr[j]==0)
            {  i=j;
               while(i+1<n)
                 {

                       if(arr[i]==0)
                          {
                           temp=arr[i];
                           arr[i]=arr[i+1];
                            arr[i+1]=temp;
                             i++;

                           }
                       else
                        {
                             i++;
                        }
                 }

                 j++;
         }

     else
      j++;

}
*/

int main()
{
    int a[7]={2,0,4,1,3,0,28};

    PushZeroesEnd(a,7);


}
