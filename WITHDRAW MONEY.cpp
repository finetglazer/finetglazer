#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i;
		cin>>i;
		int count=0;
		while(i>=1000)
		{
			i-=1000;
			count++;
		}
		while(i>=500)
		{
			i-=500;
			count++;
		}
		while(i>=200)
		{
			i-=200;
			count++;
		}
		while(i>=100)
		{
			i-=100;
			count++;
		}
		while(i>=50)
		{
			i-=50;
			count++;
		}
		while(i>=20)
		{
			i-=20;
			count++;
		}
		while(i>=10)
		{
			i-=10;
			count++;
		}
		while(i>=5)
		{
			i-=5;
			count++;
		}
		while(i>=2)
		{
			i-=2;
			count++;
		}
		if(i==1) count++;
		cout<<count<<endl;
	}
}
