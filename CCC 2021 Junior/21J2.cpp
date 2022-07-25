#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n,price=0,winner_price=-1;
	string name,winner;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>name>>price;
		if(price>winner_price)
		{
			winner = name;
			winner_price=price;
		}
	}
	cout<<winner;
	return 0;
} 
