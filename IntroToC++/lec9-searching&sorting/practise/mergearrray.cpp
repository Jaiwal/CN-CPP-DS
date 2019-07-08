
#include<iostream>
using namespace std;

void merge(int arr1[], int size1, int arr2[], int size2, int ans[]){

    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Save the merged array in ans[] array passed as argument.
     * Don't return or print anything.
     * Taking input and printing output is handled automatically.
     */
    int i=0,j=0,m=0;
    while(i<size1&&j<size2)
    {
        if(arr1[i]<=arr2[j])
        {


           ans[m]=arr1[i];
           i++;
           m++;
        }
        else if(arr2[j]<arr1[i])
        {
            ans[m]=arr2[j];
            j++;
            m++;
        }



    }


    while(i<size1){
        ans[m]=arr1[i];
        m++;
        i++;
    }
    while(j<size2){

        ans[m]=arr2[j];
        m++;
        j++;
    }

for(int i=0;i<9;i++){
         cout<<ans[i]<<" ";
     }
}

int main()
{
    int a[6]={1,3,5,6,9,11};
    int b[3]={2,4,10};
     int c[9];
    merge(a,6,b,3,c);


}
