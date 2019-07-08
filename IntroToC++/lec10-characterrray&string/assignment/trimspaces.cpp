#include <string.h>
#include<iostream>
using namespace std;


int length(char input[])
{
    int count=0;
    for(int i=0;input[i]!=0;i++)
    {
        count++;
    }
    return count;
}

void trimSpace(char input[])
{
    int count = 0;


    for (int i = 0; input[i]!='\0'; i++)
        if (input[i] != ' ')
        input[count++] = input[i];



    input[count] = '\0';


}
int main()
{
    char input[100];

    cin.getline(input,100);
    trimSpace(input);
    cout<<input;
   // replaceCharacter(name,p,z);


}



