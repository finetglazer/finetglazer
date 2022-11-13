#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a;
		long long b;
		cin>>a>>b;
		int temp=0;
		for(int i=1;i<=a;i++)
		{
			temp+=i%b;
		}
		if(temp==b) cout<<1;
		else cout<<0;
		cout<<endl;
	}
}
