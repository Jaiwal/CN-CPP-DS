#include<string.h>

void removeConsecutiveDuplicates(char *s) {
	/* Don't write main().
	* Don't read input, it is passed as function argument.
	* Change in the given string itself.
	* No need to return or print anything
	* Taking input and printing output is handled automatically.
	*/
if(strlen(s)==0||strlen(s)==0)

    return;




removeConsecutiveDuplicates(s+1);
    if(s[0]==s[1])
       {
          int i = 1;
		for (; s[i] != '\0'; i++) {
			s[i - 1] = s[i];
		}
		s[i - 1] = s[i];

       }

}
