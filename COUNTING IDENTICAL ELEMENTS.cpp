#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a[500][500];
		int n;
		cin>>n;
		for(int i=0;i<n;i++)
		{
		    for(int j=0;j<n;j++)
			{
			    cin>>a[i][j];	
			}	
		}
		int x=0;
		int b[100000]={0};
		for(int i=0;i<n;i++)
		{
			b[a[0][i]]++;
		}
		for(int i=0;i<n;i++)// nhap tung phan tu hang 0
		{
			if(b[a[0][i]]!=0)
			{
				int count=0;
			for(int k=1;k<n;k++)//tung hang tu hang 1
			{
				for(int j=0;j<n;j++)// tung cot
			    {
				   if(a[0][i]==a[k][j])
				   {
				   	count++;
				   	break;
				   }
			    }
			}
			if(count==n-1) x++;
			}
			b[a[0][i]]=0;
		}
		cout<<x<<endl;
	}
}
