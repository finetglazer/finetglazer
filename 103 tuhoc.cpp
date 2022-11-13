#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		// c1 mang danh dau
		//c 2 map
//		int n;
//		cin>>n;
//		int a[n];
//		map<int, int> mp;
//		for(int i=0;i<n;i++)
//		{
//			cin>>a[i];
//			mp[a[i]]++;
//		}
//		cout<<mp.size()<<endl;
//        int n;
//        cin>>n;
//        int a[n];
//        set<int> s;
//        for(int i=0;i<n;i++)
//        {
//        	cin>>a[i];
//        	s.insert(a[i]);
//		}
//		cout<<s.size()<<endl;
// set
//        int n;
//        cin>>n;
//        int a[n];
//        map<int,int> s;
//        for(int i=0;i<n;i++)
//        {
//        	cin>>a[i];
//        	s[a[i]]++;
//		}
//	    int x;
//	    cin>>x;
//	    while(x--)
//	    {
//	    	int b;
//	    	cin>>b;
//	    	if(s.count(b)!=0) cout<<"YES";
//	    	else cout<<"NO";
//	    	cout<<endl;
//		}
        int n;
        cin>>n;
        int a[n];
        map<ll,int> mp;
        for(int i=0;i<n;i++)
        {
        	cin>>a[i];
        	mp[i++]=a[i];
		}
		int max=mp[0];
		for(int i=0;i<mp.size();i++)
		{
			if(max<mp.begin()) max=mp[i];
		}
	}
}
