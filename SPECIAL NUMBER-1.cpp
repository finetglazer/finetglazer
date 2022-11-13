#include<iostream>
#include<cmath>
using namespace std;
int prime(int x)
{
	if(x==1||x==0) return 0;
	if(x==2) return 1;
	for(int i=2;i<=sqrt(x);i++)
	{
		if(x%i==0) return 0;
	}
	return 1;
}
int sumprime(long long x)
{
	int temp=0;
	while(x!=0)
	{
		temp+=x%10;
		x/=10;
	}
	if(prime(temp)) return 1;
	else return 0;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long t;
		cin>>t;
		if(sumprime(t)) cout<<t;
		else cout<<"-1";
		cout<<endl;
	}
}
