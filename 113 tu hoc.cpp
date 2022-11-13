#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a;
	cin>>a;
	vector<int> v;
	for(int i=0;i<a.size();i++)
	{
		v.push_back((a[i]-48));
	}
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i];
	}
}
