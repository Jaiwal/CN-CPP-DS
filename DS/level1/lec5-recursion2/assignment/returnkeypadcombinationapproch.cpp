
#include <string>
#include<bits/stdc++.h>
using namespace std;
string func(int n)
{
  if(n == 2)
    return "abc";
  if(n == 3)
    return "def";
  if(n == 4)
    return "ghi";
  if(n == 5)
    return "jkl";
  if(n == 6)
    return "mno";
  if(n == 7)
    return "pqrs";
  if(n == 8)
    return "tuv";
  if(n == 9)
    return "wxyz";
    else
        return " ";
}
void keypad(int num,string output)
{
    if(num==0)
    {
        cout<<output<<endl;
        return;
    }
        int lastdigit = num % 10;
    int smalldigit = num / 10;

    string x=func(lastdigit);
    for(int i=0;i<x.length();i++){
    keypad(smalldigit,x[i]+output);
        }





}
void printKeypad(int num){
    /*
    Given an integer number print all the possible combinations of the keypad. You do not need to return anything just print them.
    */

    string output="";
    keypad(num,output);
}


