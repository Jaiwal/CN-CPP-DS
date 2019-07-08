

int partition(int a[],int s,int e)
{
    int count=0,PI;
    int pivotelement=a[s];

    for(int i=s+1;i<=e;i++)
    {
        if(a[i]<=pivotelement)
            count++;
    }
    PI=s+count;
    int temp=a[s];
    a[s]=a[PI];
    a[PI]=temp;
    int i=0,j=e;
    while(i<j)
    {
        if(a[i]<=a[PI])
            i++;
        else if(a[j]>a[PI])
            j--;
        else
        {
            int temp=a[i];
           a[i]=a[j];
            a[j]=temp;
            i++;
            j--;
        }
    }

    return PI;

}





void quicksort(int a[],int s,int e)
{
    if(s>=e)
        return;

    int PI=partition(a,s,e);
    quicksort(a,s,PI-1);
    quicksort(a,PI+1,e);

}
void quickSort(int a[], int size) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Change in the given array itself.
     Taking input and printing output is handled automatically.
  */

    quicksort(a,0,size-1);

}
