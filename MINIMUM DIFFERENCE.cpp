#include<iostream>
#include<algorithm> 
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long a[100000];
		int n;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		long long x=1111111111111;
		for(int i=1;i<n;i++)// a[i]-a[i-1]
	    {
	    	if(x>a[i]-a[i-1]) x=a[i]-a[i-1];
		}
		cout<<x<<endl;
//		cout<<min(a,n)<<endl;
//		cout<<nmin(a,n);
//		int x;
//		
//		cout<<x<<endl;
	}
}
