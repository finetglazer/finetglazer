#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int sum(int i)
{
	int sum=0;
	while(i!=0)
	{
		sum+=i%10;
		i/=10;
	}
	return sum;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string a;
		cin>>a;
		int tmp=0;
		for(int i=0;i<a.length();i++)
		{
			
		    int temp=a[i]-48;
		    tmp+=temp;

		}
		set<int> ll;
		ll.insert(9);
		for(int i=0;i<1000;i++)
		{
			if(ll.find(sum(i)) != ll.end()) ll.insert(i);// i=18 27 chen vao roi den 999 thi nos trung 27 tren vao not
		}
		// h chi can tim trong set xem co cai day ko thi dung
		if(ll.find(tmp)!=ll.end())//tim gthay gia tri tmp trong set
		{
			cout<<"1"<<endl;
		}
		else
		{
			cout<<"0"<<endl;
		}
	}
}
