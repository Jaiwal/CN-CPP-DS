#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
    int M,N;
    cin>>M>>N;
    int a[1000][1000];

     for(int i=0;i<M;i++){
    for(int j=0;j<N;j++)
    {
        cin>>a[i][j];
    }
  }


    for(int j=0;j<N;j++)
    {
        int sum=0;

            for(int i=0;i<M;i++)
            {
                sum=sum+a[i][j];

            }

        cout<<sum<<" ";




    }

}



