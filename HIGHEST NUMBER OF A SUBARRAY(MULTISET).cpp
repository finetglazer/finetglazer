#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		int k;
		cin>>n>>k;
		multiset<int> mm;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(int i=0;i<k;i++)
		{
			mm.insert(a[i]);
		}// 1 2 3
		for(int i=k;i<n;i++)
		{// i=8 chen vao 2 3 6 nhung chua in 
			cout<<*mm.rbegin()<<" ";// 3 , 3 , 4 ,5 ,5 ,5
			mm.erase(mm.find(a[i-k]));//2 3, 3 1, 1 4, 5 2,2 3 
			mm.insert(a[i]);// 2 3 1, 3 1 4, 1 4 5, 4 5 2, 5 2 3, 2 3 6
		}
		cout<<*mm.rbegin();
		cout<<endl;
	}
}

