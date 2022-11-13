#include<bits/stdc++.h>
using namespace std;
int bauoc(long long x)
{
	int check=0;
	for(long long i=1;i<=sqrt(x);i++)
	{
		if(x % i ==0 ) check ++;
	}
	check*=2;
	if(sqrt(x)*sqrt(x)==x)
	  check -=1 ;
	if(check ==3) return 1;
	else return 0;
}
int main()
{
	int x;cin>>x;
	if(bauoc(x)) cout<<"x";
}
