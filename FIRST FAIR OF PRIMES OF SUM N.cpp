#include<iostream>
#include<math.h>
using namespace std;
int checkprime(int x)
{
	if(x==1||x==0) return 0;
	if(x==2) return 1;
	for(int i=2;i<=sqrt(x);i++)
	{
		if(x%i==0) return 0;
	}
	return 1;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int count=0;
		for(int i=2;i<=(n/2);i++)
		{
			int res=n-i;
			if(checkprime(i) && checkprime(res))
			{
				cout<<i<<" "<<res;
				count++;
				break;
			}
		}
		if(count==0) cout<<"-1";
		cout<<endl;
	}
}
