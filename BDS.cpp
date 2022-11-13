#include<iostream>
using namespace std;
int min(int a)
{
	while(a%2==0)
	    {
	    	a/=2;
		}
	while(a%3==0)
		{
			a/=3;
		}
	return a;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b;
		cin>>a>>b;
		if(min(a)==min(b)) cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	    
	}
}
