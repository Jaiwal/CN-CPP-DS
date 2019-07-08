#include <string>
#include<bits/stdc++.h>
using namespace std;

string getstring(int n)
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
}

int keypad(int num, string output[]){
    /* Insert all the possible combinations of the integer number into the output string array. You do not need to
    print anything, just return the number of strings inserted into the array.
    */
    if(num == 0)
    {
      output[0] = "";
      return 1;
    }

    int lastdigit = num % 10;
    int smalldigit = num / 10;

    int small = keypad(smalldigit, output);

    string s = getstring(lastdigit);

    for(int i = 0; i < s.length() - 1; i++)
    {
      for(int j = 0; j < small; j++)
      {
         output[j + (i+1) * small] = output[j];
      }
    }

    int k = 0;

    for(int i = 0; i < s.length(); i++)
    {
      for(int j = 0; j < small; j++)
      {
        output[k] = output[k] + s[i];
        k++;
      }
    }
  return small*s.length();
}
