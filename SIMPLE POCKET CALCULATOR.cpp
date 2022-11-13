#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float a;
	cin>>a;
	char f;
	cin>>f;
	float b;
	cin>>b;
	if(f=='+')
	cout<<fixed<<setprecision(2)<<a+b;
	if(f=='-')
	{
		cout<<fixed<<setprecision(2)<<a-b;
	}
	if(f=='*')
	{
		cout<<fixed<<setprecision(2)<<a*b;
	}
	if(f=='/')
	{
		cout<<fixed<<setprecision(2)<<a/b;
	}
}
