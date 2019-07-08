  #include<cstring>
#include<iostream>
using namespace std;
void printAllPrefixes(char input[])
{
    for(int start=0;input[start]!='\0';start++) //end index
    {
        for(int end=start;input[end]!='\0';end++)//represents start index
        {
            for(int i=start;i<=end;i++){
            cout<<input[i];
            }
             cout<<endl;
        }

    }
}
int main()
{

    char arr[100];
    cin>>arr;
    printAllPrefixes(arr);

}
