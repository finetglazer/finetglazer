#include<iostream>
#define MAX 100
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		int a[MAX];
		int i=0;
		int x;
		while(n!=0)
		{
			a[i++]=n%10;
			n/=10;
		}
//		for(int j=0;j<i;j++)
//		{
//			
//		}
	    for(int j=i-1;j>=0;j--)
	    {

	    	//a[4]=1;a[3]=2;a[2]=0;
	    	if(a[j]==0&&a[j-1]==8&&a[j-2]==4)
			{
				
				x=j;
				break;
			 } 
	    
		}
		for(int j=i-1;j>=0;j--)
		{
			if(j!=x&& j!=x-1 &&j!=x-2){
				cout<<a[j];
			} 
			
		}
		cout<<"\n";
	}
}
