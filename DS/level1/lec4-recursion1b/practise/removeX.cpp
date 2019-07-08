
// Change in the given string itself. So no need to return or print anything
#include<string.h>
void removeX(char s[]) {
    // Write your code here
  int l=strlen(s);
    if(l<=1)
        return;


    removeX(s+1);

    if(s[0]=='x')
    {  int i;
        for( i=1;i<=l;i++){
            s[i-1]=s[i];
        }
        s[l-1]='\0';
    }

}
