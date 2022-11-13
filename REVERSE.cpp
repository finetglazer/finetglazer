#include<iostream>
using namespace std;

int main()
{
		long long n;
		cin>>n;
		int i=0;
		int a[20];
		while(n!=0)
		{
			a[i++]=n%10;
			n/=10;
		}
		for(int j=0;j<i;j++)
		{
		    cout<<a[j];
		}
	
}
