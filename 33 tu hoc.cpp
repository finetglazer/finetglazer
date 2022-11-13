#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
bool check(int n,int m)
{
	int sum=(n*(n+1))/2;
	int s1=(sum+m)/2;
	int s2=sum-s1;
	if(m>sum) return false;
	else
	{
		if(s1+s2==sum && s1-s2 ==m)
		{
			return(__gcd(s1,s2)==1);
		}
		return false;
	}
	
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	   int n,m;
	   cin>>n>>m;
	   if(check(n,m)) cout<<"Yes";
	   else cout<<"No";
	   cout<<endl;
	}
}
