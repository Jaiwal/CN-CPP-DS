
bool checkMember(int n){

  /* Don't write main().
   * Don't read input, it is passed as function argument.
   * Return output and don't print it.
   * Taking input and printing output is handled automatically.
  */

    // int m=1;
    int a[n];
	int m=0;
	if(n==1) return true;
	a[1]=1;
	a[2]=1;
	int i=3;
	while(i<=n)
	{
		a[i]=a[i-1]+a[i-2];
		if(a[i]==n){
			m=1;
			break;
		}
		i+=1;

	}
	if(m==1){
		return true;

	}


	else{
		return false;
	}
    //cout<<a[n-1];

//if(m==0)return "true";
//else return "false";








}
