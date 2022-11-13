#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		// 1 2 3 4 3 5  
		string s;
		cin>>s;
		int i=s.length()-2;//chuoi so hay ki tu la giong nhau
		while(i>=0 && s[i]<=s[i+1])
		{
			i--;
		}
		if(i==-1) cout<<"-1";
        else
		{
			int j=s.length()-1;
        for(;j>i;j--)
        {
        	if(s[j]<s[i] && s[j]!=s[j-1]) 
        	{
                char temp=s[i];
                s[i]=s[j];
                s[j]=temp;
                break;
			}
		}
		for(int k=0;k<s.length();k++)
		{
			cout<<s[k];
		}
		}
		cout<<endl;
	}
}
