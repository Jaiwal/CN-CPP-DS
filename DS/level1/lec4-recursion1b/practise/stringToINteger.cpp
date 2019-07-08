#include<string.h>
#include<math.h>
int stringToNumber(char s[]) {
    // Write your code here
   if(strlen(s)==1)
   {
       int b=s[0]-'0';
       return b;

   }


    int ans=stringToNumber(s+1);
    int b=s[0]-'0';
    return ans+b*pow(10,strlen(s)-1);

}


