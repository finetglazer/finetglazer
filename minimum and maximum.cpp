#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
//min toan 5
ull min(ull n, int a[1000])
{
	ull s=0;
	int k=0 ;
	while(n!=0)
	{
		a[k] = n%10;
		n/=10;
		k++;
	}
	for(int i = k-1;i>=0;i--)
	{
		if(a[i]==6)
		{
			a[i] = 5;
		}
		s = s*10 + a[i];
	}
	return s;
}
// cho max toan 6
ull max( ull n , int a[1000])
{
	ull s=0;
	int k=0 ;
	while(n!=0)
	{
		a[k] = n%10;
		n/=10;
		k++;
	}
	for(int i=k-1;i>=0;i--)
	{
		if(a[i]==5) a[i]=6;
		s= s*10 +a[i];
	}
	return s;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a[1000]={0};
		int b[1000]={0};
		ull x1,x2;
		cin>>x1>>x2;
		ull mi=min(x1,a)+min(x2,b);
		ull ma=max(x1,a)+max(x2,b);
		cout<<mi<<" "<<ma;
		cout<<endl;
	}
}
