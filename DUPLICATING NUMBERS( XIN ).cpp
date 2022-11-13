#include<iostream>
using namespace std;
int gcd(int a,int b)
{
	if(a==0 || b==0) return a+b;
	while(a!=b)
	{
		if(a>b) a-=b;
		else b-=a;
	}
	return a;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long x,y,a;
		cin >> a >> x >> y;
		for(int i=1;i<=gcd(x,y);i++)
		{
			cout<<a;
		}
		cout<<endl;
	}
}
