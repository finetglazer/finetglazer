#include<bits/stdc++.h>
using namespace std;
void rev(int a[],int n)
{
    int k=n-1;
	for(int i=0;i<k;i++)
	{
		int temp=a[i];
		a[i]=a[k];
		a[k]=temp;
		k--;
	}
}
void end(string a,string b)
{
	int n1=a.length(),n2=b.length();
	int x[n1],y[n1],z[n1+1];
	for(int i=0;i<n1;i++)
	{
		x[i]=a[i]-48;
	}
	for(int j=0;j<n2;j++)
	{
		y[j]=b[j]-48;
	}
	rev(x,n1);
	rev(y,n2);
	int n=0;
	for(int i=n2;i<n1;i++)
	{
		y[i]=0;
	}
	int nho=0;
	for(int i=0;i<n1;i++)
	{
	    int d1=x[i]+y[i]+nho;
	    z[n++]=d1%10;
	    nho=d1/10;
	}
	if(nho==1) z[n++]=1;
    for(int i=n-1;i>=0;i--)
    {
    	cout<<z[i];
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string a;
		string b;
		cin>>a>>b;
		if(a.length()>b.length()) end(a,b);
		else end(b,a);
		cout<<endl;
	}
	}

