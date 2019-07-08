#include<iostream>

using namespace std;
int main()
{

    int n,x;
        cin>>n;
        int So=0,Se=0;
        while(n>0)
        {
            x=n%10;
            if(x%2==0){
                Se=Se+x;
            }
            else
            {

                So=So+x;
            }
            n=n/10;

        }

        cout<<Se<<" "<<So;


}
