
#include<climits>
#include<iostream>
using namespace std;
int BinarySearch(int arr[], int n, int val){
	int start=0,end=n-1;

	while(start<=end)
    {
        int mid= start + (end - start) / 2;
        if(arr[mid]==val)
             return mid;
        if(val>arr[mid])
             start=mid+1;
         else
             end=mid-1;


    }
    return -1;

}

int main()
{

    int N,x;
    cin>>N;
    int input[100000];
    for(int i=0;i<N;i++)
    {
        cin>>input[i];
    }

    cin>>x;
    int z=BinarySearch(input,N,x);
     cout<<z;

}






