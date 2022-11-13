#include<iostream>
using namespace std;
int sdigit(int x)
{
	int temp=0;
	while(x!=0)
	{
		temp+=x%10;
		x/=10;
	}
	return temp;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<sdigit(n)<<endl;
	}
}
