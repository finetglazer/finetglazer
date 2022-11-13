#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string a;
	cin>>a;
	int cnt=0;
	// abcd %e =(a%e+b)%e
	for(int i=0;i<a.size();i++)
	{
	    if(i%2==0) cnt+= a[i]-'48';
	    else cnt-= a[i]-'48';
	}
	if(cnt%11==0) cout<<"1";
	else cout<<"0";
	cout<<endl;
	}
	
}
