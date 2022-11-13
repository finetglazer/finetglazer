#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
	    double sum=0;
		for(int i=1;i<=n;i++)
		{
			sum = sqrt(sum + i);
		}
		cout<<fixed<<setprecision(5)<<sum<<endl;
	}
}
