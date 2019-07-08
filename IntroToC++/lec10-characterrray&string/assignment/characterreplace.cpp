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
    //cout<<"Enter your name"<< " ";
    cin.getline(name,100000);
    char p='p';
    char z='z';
    replaceCharacter(name,p,z);


}
