#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int a,b;
    cin>>a>>b;
    int power=1;
    for(int i=1;i<=b;i++){
        power=power*a;
    }
    cout<<power;


}

