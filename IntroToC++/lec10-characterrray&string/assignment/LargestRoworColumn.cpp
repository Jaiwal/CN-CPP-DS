#include<climits>
#include<iostream>
using namespace std


void findLargest(int arr[][1000], int row, int col){


  /* Don't write main().
   *  Don't read input, it is passed as function argument.
   * Print output as specified in the question.
   */
  int CSum=0,RSum=0 ResultSum=INT_MIN;
   R;
  for(int i=0;i<M;i++)
    {


            for(int j=0;j<N;j++)
            {
                 Sum=Sum+a[i][j];

            }

        if(RSum<Sum)
        {
            RSum=Sum;
            R=i+1;
        }

 }


  for(int j=0;j<N;j++)
    {


            for(int i=0;i<M;i++)
            {
                SSum=SSum+a[i][j];

            }

    if(SSum<RSum)
    {
        RSum=SSum;
        R=j+1;
    }




    }

    cout<<


}



int main()
{
     int M,N;
    cin>>M>>N;
    int a[1000][1000];

    for(int i=0;i<M;i++)
    {


            for(int j=0;j<N;j++)
            {
                cin>>a[i][j];

            }

 }

 findLrgest(a,M,N);


}
