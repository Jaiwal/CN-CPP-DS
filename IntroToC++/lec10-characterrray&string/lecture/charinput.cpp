#include<cstring>
#include<iostream>
using namespace std;

int main()
{
    char input1[100]="Hi";
    char input2[100]="priya";
     strcpy(input1,input2);
      strncpy(input1,input2,2);
     cout<<input1;




   /* cin>>input1;
    cin>>input2;
  */


 /*
 cout<<strcmpi(input1,input2);

*/


 /*   int len=strlen(input);
    cout<<len;
    */
}
