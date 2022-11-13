#include<iostream>
using namespace std;
int check(long long a)
{
	if(a%2==0) return 1;
	else return 0;
}
int end(long long a)
{
	while(a!=0)
	{
		if(check(a%10)==0) return 0; 
		a/=10;
	}
	return 1;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    long long a;
	    cin>>a;
		if(check(a) && end(a)) cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
}
