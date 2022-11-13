#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		string a;
		string b;
		getline(cin,a);
		getline(cin,b);
		vector<string> v;
		vector<string> j;
		stringstream ss(a);
		stringstream xx(b);
		string temp;
        while(ss >> temp)
        {
        	v.push_back(temp);
        	
		}
		string cnt;
		while(xx >> cnt)
		{
			j.push_back(cnt);
		}
		vector<string> l;
		for(int i=0;i<v.size();i++)
		{
			int c=0;
			for(int k=0;k<j.size();k++)
			{
				if(v[i]==j[k])
				{
					c++;
				}
			}
			if(c==0) l.push_back(v[i]);
		}
        for(int i=0;i<l.size();i++)
		{
			for(int k=l.size()-1;k>i;k--)
			{
				if(l[i]==l[k])
				{
					l[k]=' ';
				}
			}
		}
		for(int i=0;i<l.size();i++)
		{
			for(int j=l.size()-1;j>i;j--)
			{
				if(l[i]>l[j])
				{
					string jj=l[i];
					l[i]=l[j];
					l[j]=jj;
				}
			}
		}
		string end[200];// cai de cho vao va ko co dau cach roi in thi chi co 1 dau cach
		int m=0;
        for(int i=0;i<l.size();i++)
        {
        	end[m++]=l[i];
		}
		
		for(int i=0;i<m;i++)
		{
			
				cout<<end[i];
				cout<<" ";
			
		}
		cout<<endl;
	}
}
