
#include<string.h>

void replaceCharacter(char s[], char c1, char c2) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * No need to print or return the output.
     * Change in the given input string itself.
     * Taking input and printing output is handled automatically.
     */
    if (s[0] == '\0') {
		return;
	}

    if(s[0]==c1){

        s[0]=c2;
    }



       replaceCharacter(s+1,c1,c2);


}
