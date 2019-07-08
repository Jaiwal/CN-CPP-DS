  #include<cstring>
#include<iostream>
using namespace std;


int main()
{




for(int i=0;i<n;i++)
{

    cin>>arr[i];
}
int arr[1000000];

for(int i=0;i<n;i++)
{
    int temp=arr[i],flag=1;
    for(int j=i+1;j<n;j++)
    {
        if(temp>=arr[j])
            continue;
        else
        {
            flag=0;
            break;
        }
    }


    if(flag==1)
    {
        cout<<arr[i]<<" ";
    }
    else
        continue;
}






}


