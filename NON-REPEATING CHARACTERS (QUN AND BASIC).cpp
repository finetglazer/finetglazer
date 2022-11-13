#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string s;
		cin >> s;
		
		for(int i=0; i<s.length(); i++)
		{
			int count = 0;
			for(int j=i+1; j<s.length(); j++)
			{
				if(s[i] == s[j])
				{
					count++;
					s[j] = ' ';
				}		
			}
			if(count != 0)
			{
				s[i] = ' ';
			}		
		}
		for(int p=0; p<s.length(); p++)
		{
			if(s[p] != ' ')
				cout << s[p];
		}
		cout << endl;
	}
	
 	return 0;
}
