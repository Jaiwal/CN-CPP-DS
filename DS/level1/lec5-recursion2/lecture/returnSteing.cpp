#include <iostream>
using namespace std;


string func(int no)
{


     if(no==2)
     return "abc";
     else if(no==3)
     return "def";
      else if(no==4)
     return "ghi";
      else if(no==5)
     return "jkl";
      else if(no==6)
     return "jkl";
      else if(no==7)
     return "mno";
      else if(no==8)
     return "pqrs";
      else if(no==9)
     return "wxyz";
     else
        return " ";


}

int main()
{

    string x=func(1);
    cout<<x;
}
