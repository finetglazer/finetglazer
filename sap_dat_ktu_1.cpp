#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string a;
		cin>>a;
		map<char,int> mp;
        for(int i=0;i<a.size();i++)
        {
            mp[a[i]]++;
        }
        vector<int> vv;
        for(pair<char,int> x:mp)
        {
            if(x.second!=0) vv.push_back(x.second);
        }
        sort(vv.begin(),vv.end());
        int k=vv.size()-1;
        int end=vv[k];
        for(int i=0;i<vv.size()-1;i++)
        {
            end-=vv[i];
        }
        if(end>=2) cout<<"0";
        else cout<<"1";
        cout<<endl;
	}
	
}
