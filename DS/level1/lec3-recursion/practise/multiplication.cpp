
int multiplyNumbers(int m, int n) {
    // Write your code here

    if(n==1)
        return m;

    int ans= multiplyNumbers(m,n-1);

    return m+ans;


}


