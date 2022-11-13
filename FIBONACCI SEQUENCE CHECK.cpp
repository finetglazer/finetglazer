#include<iostream>
using namespace std;
long long fib(long long n)
{
	if(n==0) return 1;
    long long a = 0, b = 1, c;
    for(int i=2; i<=10000; i++)
	{
        c = a + b;
        a = b;
        b = c;
        if(c>n)   return 0;
		if(c==n)   return 1;
    }
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a[1000];
		int n;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(int i=0;i<n;i++)
		{
			if(fib(a[i])) cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}
