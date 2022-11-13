#include<iostream>
using namespace std;
int check(int a[],int n)
{
	int count =0;
	for(int i=1;i<n;i++)
	{
		if(a[i]>a[i-1])
		{
			count =1;
			break;
		} 
	}
	if(count==1) return 1;
	else return 0;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a[10000];
		int n;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int max=0;
		if(check(a,n)) 
		{
		    for(int i=0;i<n;i++)
		    {
		    	for(int j=n-1;j>i;j--)
		    	{
		    		int res=a[j]-a[i];
		    		if(res>max) max=res;
				    
				}
				
			}
			cout<<max<<endl;
		}
		else cout<<"-1"<<endl;
	}
}
