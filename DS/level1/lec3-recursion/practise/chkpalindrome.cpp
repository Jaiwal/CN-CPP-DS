
#include<string.h>
bool helper(char s[],int start,int end)
{   if(start==end)
    return true;

    if(s[end]!=s[start])
    return false;
    if(start<end+1)
    return helper(s,start+1,end-1);
  return true;

}
bool checkPalindrome(char s[]) {
    // Write your code here

    if(strlen(s)==1)
        return true;

    if(s[0]!=s[strlen(s)-1])
        return false;


 return helper(s,1,strlen(s)-2);
}



