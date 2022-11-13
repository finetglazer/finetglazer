#include<iostream>
using namespace std;
int smfdg(long long x)
{
	int temp=0;
	while(x!=0)
	{
		temp+=x%10;
		x/=10;
	}
	return temp;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long i;
		cin>>i;
        while(i>9)
        {
        	i=smfdg(i);
		}
		cout<<i<<endl;
	}
}
