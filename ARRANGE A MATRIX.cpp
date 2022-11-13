#include<iostream>
using namespace std;
int main()
{
	int m,n,k;
	cin>>m>>n>>k;
	int a[105][105];
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>a[i][j];
		}
	}
	//j=k thi dao cot thi maintain
	for(int i=1;i<=m;i++)
	{
		for(int j=m;j>i;j--)
		{
			if(a[i][k]>a[j][k])
			{
			   int temp=a[i][k];
			   a[i][k]=a[j][k];
			   a[j][k]=temp;	
			} 
		}
	}
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
