#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[100];
	a[0]=1;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];//a[1]=7 a[2]=20 a[3]=88
	}
	int j=1;
	int temp=0;
	while(j<=n)
	{
		if(a[j]-a[j-1]+1<=15)// plot 1
		{
			temp=a[j];
			a[j]++;
			j++;
		} 
		
		else
		{
			temp+=15;
			break;
		}
		if(j>n && temp<75){
			temp+=15;//plot 2
			break;	
		} 
		if(j>n && temp>=75)
		{
			temp=90;
		}
	}
	cout<<temp;
}
