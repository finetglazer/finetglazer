#include<iostream>
using namespace std;
int ucln(int a,int b)
{
	if(a==b) return a;
	while(a!=b)
	{
		if(a>b) a-=b;
		else b-=a;
	}
	return a;
}
int sumd(int a)
{
	int temp=0;
	while(a!=0)
	{
		temp+=a%10;
		a/=10;
	}
	return temp;
}
int check(int a)
{
	if(ucln(a,sumd(a))>1) return 1;
	else return 0;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long i;
		cin>>i;
		for(;;i++)
		{
			if(check(i))
			{
				cout<<i;
				break;
			}
		}
		cout<<endl;
	}
}
