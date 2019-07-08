// arr - input array
// n - size of array
#include <limits.h>
int FindSecondLargest(int arr[], int n){
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */

     int i;

  int first , second = INT_MIN;

    if (n<=1)
    {

        return INT_MIN;
    }

    for (i = 0; i < n ; i ++)
    {
        if (arr[i] > first)
        {
            second = first;
            first = arr[i];
        }


        else if (arr[i] > second && arr[i] != first)
            second = arr[i];
    }
    return second;


}

