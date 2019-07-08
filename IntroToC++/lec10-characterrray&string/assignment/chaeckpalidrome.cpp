#include <string.h>
#include<iostream>
using namespace std;

bool checkpalindrome(char input[])
{
    int l=0;
    int h=strlen(input)-1;

    while(h>l)
    {
        if(input[l++]!=input[h--])
            return false;

    }
    return true;

}

int main()
{
    char name[100];
    cout<<"Enter your name"<< " ";
    cin>>name;
    cout<<checkpalindrome(name);
}

