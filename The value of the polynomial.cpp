#include<bits/stdc++.h>
using namespace std;
long long mod=1e9 + 7;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<=n-1;i++)
		{
			cin>>a[i];
		}
		long long end=0;
		for(int i=0;i<=n-1;i++)
		{
			long long temp=1;
			for(int j=n-i-1;j>0;j--)
			{
				temp*=x;
				temp%=mod;
			}
			long long res=a[i]*temp;
		    end+=res;
		    if(end>mod) end%=mod;
		}
		cout<<end<<endl;
	}
}
