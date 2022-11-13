#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		
		string a;
		getline(cin,a);
 	    map<char,int> mp;
 	    for(char x : a)
 	    {
 	        mp[x]++;	
		}
		for(char x : a)
		{
			if(mp[x] == 1)
			  cout<<x;
		}
		cout<<endl;
	}
}

