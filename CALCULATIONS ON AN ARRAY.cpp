#include<iostream>
#include<cmath>
using namespace std;
long long q=1e9+7;
int gcd(int a, int b) {// tim ucln
    if (b == 0) return a;
    return gcd(b, a % b);
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a[10000];
		int n;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int temp=a[0];
		for(int i=1;i<n;i++)
		{
			temp=gcd(temp,a[i]);
		}
		long long count=1;
		for(int i=0;i<n;i++)
		{
			count*=a[i];
			count%=q;
		}
		
		long long x=1;
		for(int i=0;i<temp;i++)
		{
			x*=count;
			x%=q;
		}//ko dung pow vi no co the to hon ca unsigned long long
		cout<<x<<endl;
	}
}
