
int staircase(int n){
    /* Don't write main().
     *  Don't read input, it is passed as function argument.
     *  Return output and don't print it.
     *  Taking input and printing output is handled automatically.
     */
    if(n==1)
        return 1;
    if(n==2)
        return 2;
    if(n==3)
        return 4;
    int steps,x,y,z;


    x=staircase(n-1);

     y=staircase(n-2);

     z=staircase(n-3);

    return x+y+z;

}
