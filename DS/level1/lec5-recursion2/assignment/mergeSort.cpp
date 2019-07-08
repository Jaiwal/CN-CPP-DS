
void merge(int input[],int si,int ei)
{
    int size=ei-si+1;
    int *out=new int[size];
    int mid=(si+ei)/2;
    int i=si,j=mid+1,k=0;
    while(i<=mid&&j<=ei)
    {
        if(input[i]>=input[j])
        {
            out[k]=input[j];
            k++;
            j++;
        }
        else
        {
            out[k]=input[i];
            k++;
            i++;
        }
    }

    while(i<=mid)
    {
        out[k]=input[i];
            i++;
            k++;
    }

    while(j<=ei)
    {
        out[k]=input[j];
        k++;
        j++;
    }

    int m=0;
    for(int i=si;i<=ei;i++)
    {
        input[i]=out[m];
        m++;
    }

    delete[] out;
}




void mergesort(int input[],int si,int ei)
{
    if(si>=ei)
        return;


    int mid=(si+ei)/2;
    mergesort(input,si,mid);
    mergesort(input,mid+1,ei);

    merge(input,si,ei);

}


void mergeSort(int input[],int size)
{
    mergesort(input,0,size-1);
}























