#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/ int n;

  cin>>n;


  int i=1;
  int val;
  while(i<=n){
  int k=1;
    int j=1;
    while(k<=n-i){
    cout<<" ";
    k+=1;
  }
    val=i;
    while(j<=i){

        cout<<val;
        j+=1;
        val+=1;
    }
    cout<<endl;
    i+=1;
  }



}



