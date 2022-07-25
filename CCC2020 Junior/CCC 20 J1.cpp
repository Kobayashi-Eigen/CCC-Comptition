#include<iostream>
using namespace std;
int main(){
	int s,m,l,a;
	cin>>s>>m>>l;
	a=1*s+2*m+3*l;
	if(a>=10)
		cout<<"happy";
	else
		cout<<"sad";
	return 0;
}
