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
		for(int i=0;i<n;i++)
	    {
	    	for(int j=0;j<n;j++)
	    	{
	    		if(i==0||i==n-1) cout<<a[i][j]<<" ";
	    		else {
	    			if(j==0||j==n-1) cout<<a[i][j]<<" ";
				}
			}
			cout<<endl;
		}
}
}
