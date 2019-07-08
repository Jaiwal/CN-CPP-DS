
#include<iostream>
using namespace std;


int main()
{

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/

	int N;
	cin>>N;
	int sum=0;

	for(int i=1;i<=N;i++)
    {

        if(i%2==0)
        {
            sum=sum+i;
        }


    }
     cout<<sum;



}


