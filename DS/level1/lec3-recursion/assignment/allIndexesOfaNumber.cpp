

int allIndexes(int input[], int size, int x, int output[]) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Save all the indexes in the output array passed and return the size of output array.
     Taking input and printing output is handled automatically.
  */
   if(size==0)
       return 0;


    int ans=allIndexes(input+1,size-1,x,output);

    for(int i=0;i<ans;i++)
        output[i]=output[i]+1;

    if(input[0]==x)
    {

        for(int i=ans;i>0;i--)
        {

            output[i]=output[i-1];

        }
         output[0]=0;
        return ans+1;
    }
    else
        return ans;

}








