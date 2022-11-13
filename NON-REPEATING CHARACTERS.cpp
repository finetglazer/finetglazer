#include<iostream>
#include<string.h>
using namespace std;
void xoa(string a,int vt)
{
	int n=a.length();
	for(int i=vt;i<n-1;i++)
	{
		a[i]=a[i+1];
	}
	a[n-1]='/0';
 } 
void end(string a)
{
	int n=a.length();
	int tmp=0;
	for(int i=0;i<n;i++)
	{
		for(int j=n-1;j>i;j--)
		{
			if(a[i]==a[j])
			{
				tmp=1;
				xoa(a,j);
			}
		}
		if(tmp==1)
		{
			xoa(a,i);
			i--;
		}
	}
	cout<<a<<endl;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    cin.ignore(1);
		string a;
		getline(cin,a);
	    end(a);
//		for(int i=0;i<50;i++)
//		{
//			cout<<b[i];
//		}
	}
}
