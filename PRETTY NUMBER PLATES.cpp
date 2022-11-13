#include<bits/stdc++.h>
using namespace std;
int sx(vector<int> a)
{
	for(int i=0;i<a.size();i++)
	{
	   for(int j=a.size()-1;j>i;j--)
	   {
	   	    if(a[j]<=a[i]) return 0;
	   }
	}
	return 1;
}
int id(vector<int> a)
{
	for(int i=0;i<a.size();i++)
	{
	   for(int j=a.size()-1;j>i;j--)
	   {
	   	    if(a[j]!=a[i]) return 0;
	   }
	}
	return 1;
}
int id1(vector<int> a)
{
    if(a[0]==a[1] && a[1]==a[2] && a[3]==a[4] ) return 1;
	return 0;
}
int i68(vector<int> a)
{
	for(int i=0;i<a.size();i++)
    {
    	if(a[i]!=6 && a[i]!=8) return 0;
 	}
 	return 1;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		vector<int> v;
		string a;
		cin>>a;
		//5-10 8 ki tu cham
		for(int i=5;i<=10;i++)
		{
			if(i!=8)
			{
			   v.push_back(a[i]-48);	
			} 
		}
//		for(int i=0;i<v.size();i++)
//		{
//			cout<<v[i];
//		}
		if(sx(v) || id(v) || id1(v) || i68(v)) cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
}
