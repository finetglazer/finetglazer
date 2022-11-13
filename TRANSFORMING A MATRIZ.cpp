#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;cin>>n;
		int a[n][n],h[n]={0},c[n]={0};
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>a[i][j];
				h[i]+=a[i][j];
				c[j]+=a[i][j];
			}
		}
		int sum=0;
		for(int i=0;i<n;i++)
		{
			if(sum<c[i]) sum=c[i];
			if(sum<h[i]) sum=h[i];
		}
		int i=0,j=0;
		int end=0;
		while(i<n && j<n)
		{
			int x=0;
			int del=sum-h[i]-(sum-c[j]);
			if(del>0) x=sum-c[j];
			else x=sum-h[i];
			a[i][j]+=x;
			h[i]+=x;
			c[j]+=x;
			end+=x;
			if(h[i]==sum) i++;
			if(c[j]==sum) j++;
		}
		cout<<end<<endl;
	}
}
