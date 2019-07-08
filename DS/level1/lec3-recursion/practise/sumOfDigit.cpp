
int sumOfDigits(int n) {
    // Write your code here
   if(n>=0&&n<=9)
       return n;


    int ans= sumOfDigits(n/10);

    return ans+(n%10);
}


