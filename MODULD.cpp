#include<iostream>
using namespace std;

int main()
{
	int a[4];
	for(int i=0;i<4;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<4;i++)
	{
		for(int j=3;j>i;j--)
		{
			if(a[i]>a[j]) {
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	int temp;
	for(int i=0;i<=a[1];i++)
	{
		if(a[0] % i == a[1] % i && a[1]%i==a[2]%i && a[2]%i==a[3]%i)
		{
			temp =i;
		}
	}
	cout<<temp<<endl;
}
