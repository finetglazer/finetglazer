#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a;
	getline(cin,a);
	for(int i=0;i<a.size();i++)
	{
		a[i]=tolower(a[i]);
	}
	vector<string> v;
	stringstream ss(a);
	string tmp;
	while(ss >> tmp)
	{
		v.push_back(tmp);
	}
	for(int i=0;i<v.size()-1;i++)
	{
		cout<<v[i][0];
	}
	cout<<v[v.size()-1]<<"@ptit.edu.vn";
}
