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
		int b[26]={0};
		for(int i=0;i<a.size();i++)
		{
			b[a[i]-'a']++;
		}
		int s[50];
		int j=0;
		sort(b,b + 26);
		for(int i=0;i<26;i++)
		{
			if(b[i]!=0)
			{
				s[j++]=b[i];
			}
		}
//		for(int i=0;i<j;i++)
//		{
//			cout<<s[i];
//		}
		int tmp=s[j-1];
		for(int i=0;i<j-1;i++)
		{
			tmp-=s[i];
		}
		if(tmp>=2) cout<<"0";
		else cout<<"1";
		cout<<endl;
	}
	
}
