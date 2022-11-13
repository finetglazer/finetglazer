#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		
		cin>>n>>k;
		int a[n];
		long long e=0
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
	    sort(a,a+n);
	    long long e=0;
//	    for(long long i=0;i<n;i++)
//	    {
//	    	 cout<<a[i]<<" ";
//		}
for(long long i=n-1;i>0;i--)
{
	if((lower_bound(a,a+n,k-a[i]-a)<i))
{

        e+=i-(lower_bound(a,a+n,k-a[i]-a));
}
        if(a[i]+a[i-1]<k) break;
	}
	cout<<e<<endl;
}
}
