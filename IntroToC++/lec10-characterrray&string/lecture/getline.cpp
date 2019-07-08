#include <string.h>
#include<iostream>
using namespace std;

void replaceCharacter(char input[], char c1, char c2) {
    int h=strlen(input);
    int i=0;
    while(i<h)
    {
        if(input[i]==c1){
            input[i]=c2;

        }
          i++;
    }


        cout<<input;

}


int main()
{
    char name[100000];

    cin.getline(name,4,'o');
    char p='p';
    char z='z';
    cout<<name;
   // replaceCharacter(name,p,z);


}

