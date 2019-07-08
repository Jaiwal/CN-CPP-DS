#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	char n;
	int countchar = 0;
	int countint =0;
	int countspace=0;
	n = cin.get();
	while(n!= '$'){
		if(n>=48&& n<=57 ) countint++;
		else if(n>=97 && n<=122) countchar++;
		else countspace++;
		n = cin.get();
	}
	cout<<countchar<<" "<<countint<<" "<<countspace;


}
