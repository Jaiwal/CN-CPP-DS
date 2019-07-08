#include<iostream>
using namespace std;
/* int sum(int a[],int size){  //as  a pointer mil rha h ,sizeof=8 ayega

cout<<sizeof(a);
 return 0;
}

*/
//can be written as
int sum(int *a,int size){  //as  a pointer mil rha h ,sizeof=8 ayega

  int ans=0;
  for(int i=0;i<size;i++)
  {
      ans=ans+a[i];
  }
  return ans;
}

int main()
{
   int a[10];
   cout<<sizeof(a)<<endl;
   cout<<sum(a,10)<<endl;

}

