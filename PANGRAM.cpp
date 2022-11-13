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
		cin>>a;//can gi thi lam lay
		int k;
		cin>>k;
//		int count=0;
//		for(int i=0;i<a.size();i++)
//		{
//			if(a[i]>='A' && a[i]<='Z')
//			{
//				a[i]+=32;
//			}
//		}
//	    if(a.size()<26) cout<<"0";
//	    else{
	    	set<char> ss;
	    	for(int i=0;i<a.size();i++)
	    	{
	    		ss.insert(a[i]);
			}
			
			if(26- ss.size()<=k) cout<<"1";
			else cout<<"0";
//	    }
	    cout<<endl;
	}
}

