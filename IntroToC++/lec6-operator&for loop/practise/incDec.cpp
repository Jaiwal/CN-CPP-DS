#include<iostream>
using namespace std;

int main()

{

    int n,i,s,j,k,m;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(i=0;i<n;i++)
        {
        if(a[i]>a[i+1])
            m=0;
        else
            m=1;
        }


      for(i=0;i<n;i++)
        {


        if(a[i]<a[i+1])
            k=0;
            else
                k=1;

        }


       /* if(a[0]<a[1])
        {

            for(i=1;i<n;i++)
            {
                if(a[i]<a[i+1])
                {
                    s=i+1;
                }

                for(j=s;j<n;j++)
                {
                    if(a[j]>a[j+1])
                    {
                        s=1;
                    }

                }
            }
        }

        else */
          for(i=1;i<n;i++)
        {
            if(a[i]<a[i+1])
            {
                s=0;
            }
            else
                s=i;
        }


            for(j=s;j<n;j++)
            {
                if(a[j]>a[j+1])
                    s=0;
                    else
                        s=1;
            }



        if(s==1||m==1||k==1)
            cout<<"true";
        else
            cout<<"false";
    // if(m==1)
     //       cout<<"true";
      //       if(k==1)
      //      cout<<"true";



}
