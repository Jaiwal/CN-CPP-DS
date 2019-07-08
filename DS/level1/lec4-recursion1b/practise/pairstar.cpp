
// Change in the given string itself. So no need to return or print the changed string.
#include<string.h>
void pairStar(char s[]) {
    // Write your code here

    int l=strlen(s);
    if(l<=1)
        return;


        if(s[0]==s[1])
        {

            for(int i=l;i>=1;i--)
            {
                s[i+1]=s[i];
            }
            s[1]='*';
            pairStar(s+2);
        }
    else
        pairStar(s+1);


}
