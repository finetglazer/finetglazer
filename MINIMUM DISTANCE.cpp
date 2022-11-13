#include<iostream>
using namespace std;
void in(int a[10000],int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
}
void end(int a[10000],int n)
{
    int del ;
    if(a[1]>a[0]) del=a[1]-a[0];
    else del=a[0]-a[1];
    for(int i=0;i<n;i++)
       for(int j=n-1;j>i;j--)
       {
       	    if(a[j]>a[i] && a[j]-a[i]<del) del=a[j]-a[i];
       	    else if(a[j]<=a[i] && a[i]-a[j]<del) del=a[i]-a[j];
	   }
	cout<<del<<endl;
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
		in(a,n);
		end(a,n);
	}
}
