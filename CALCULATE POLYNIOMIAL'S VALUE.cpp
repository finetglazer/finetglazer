#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int t;
	long long p=1e9+7;
	cin>>t;
	while(t--)
	{
		
		int n;
		int x;
		cin>>n>>x;
		int a[100000];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		long long sum=0;
		for(int i=0;i<n;i++){
			long long tmp=1;
			for(int j=n-i-1;j>0;j--){
				tmp=(tmp*x)%p;
			}
			sum+=(a[i]*tmp);
			if(sum>p){
				sum%=p;
			}
		}
		cout<<sum<<endl;
	}
}
