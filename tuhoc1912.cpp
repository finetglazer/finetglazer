#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool check(int a[],int b[],int n)
{
	for(int i=1;i<=n;i++)
	{
		if(a[i]!=b[i]) return false;
	}
	return true;
}
ll n,k,stt;
int a[105],b[105];
bool check1(string s)
{
	if(s[0]!='8' or s[s.size()-1] !='6') return false;
	for(int i=0;i<s.size()-1;i++)
	{
		if(s[i]==s[i+1] && s[i]=='8') return false;
//		if(s[i]==s[i+1] && s[i+1]==s[i+2] && s[i]=='6') return false;
	}
	for(int i=0;i<s.size()-3;i++)
	{
		if(s[i]==s[i+1] && s[i+1]==s[i+2] && s[i+2]==s[i+3] and s[i]=='6') return false;
	}
	return true;
}
void Try(int i)
{
	for(int j=b[i-1]+1;j<=n-k+i;j++)
	{
		b[i]=j;
		if(i==k)
		{
			if(check(a,b,k)) cout<<stt;
			else stt++;
		}
		else Try(i+1);
	}
}
void merge(int a[],int b[],int n,int m)
{
	vector<int> vv;
	int i,j;
	i=j=0;
	while(i<n && j<m)
	{
		if(a[i]<b[j])
		{
			vv.push_back(a[i]);
			i++;
		}
		else 
		{
			vv.push_back(b[j]);
			j++;
		}
	}
	while(i<n)
	{
		vv.push_back(a[i]);
		i++;
	}
	while(j<m)
	{
		vv.push_back(b[j]);
		j++;
	}
	for(int l=0;l<vv.size();l++)
	{
		cout<<vv[l]<<" ";
	}
}
map<int,int> mp;
bool cmp(int a,int b)
{
	if(mp[a]==mp[b])
		return a<b;
	return mp[a]>mp[b];
}
int binary_search(int a[],int l,int r,int x)
{
	// 0 1 3 4 5    1 2  0 1 0 1 1 
	while(l<=r)
	{
		int m=(l+r)/2;
		if(a[m]==x) return m;
		else if(a[m]<x) return binary_search(a,m+1,r,x);
		else  return binary_search(a,l,m-1,x);
	}
	return -1;
}
bool check2(string s)
{
	stack<char> st;
	
		for(int i=0;i<s.size();i++)
		{
			if(s[i]=='(' or s[i]=='[' or s[i]=='{')
				st.push(s[i]);
			else
			{
				if(st.size()==0) return false;
				if(s[i]==')' and st.top()!='(')
					return false;
				if(s[i]==']' and st.top()!='[')
					return false;
				if(s[i]=='}' and st.top()!='{')
					return false;
				st.pop();
			}
		}
	if(st.size()!=0 ) return false;
	return true;
}
int dx[8]={-1,0,1,-1,1,-1,0,1};
int dy[8]={-1,-1,-1,0,0,1,1,1};
int toNum(string s)
{
	int res=0;
	for(int i=0;i<s.size();i++)
	{
		res*=10;
		res+=(s[i]-'0');
	}
	return res;
}
int main()
{
	int t=1;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n+5];
		for(int i=0;i<n;i++) cin>>a[i];
		stack<int> st;
		st.push(0);
		vector<int> ans;
		ans.push_back(1);
		for(int i=1;i<n;i++)
		{
			if(a[i]>=a[st.top()])
			{
				while(st.size() && a[i]>=a[st.top()])
					st.pop();
				if(st.size()==0)
				{
					ans.push_back(i+1);	
				}
				else
				{
					ans.push_back(i-st.top());
				}
				st.push(i);
			}
			else
			{
				st.push(i);
				ans.push_back(1);
			}
		}
		for(int i=0;i<n;i++)
			cout<<ans[i]<<" ";
//		string s;
//		cin>>s;
//		stack<char> st;
//		for(int i=0;i<s.size();i++)
//		{
//			if(s[i]!=']')
//			{
//				st.push(s[i]);
//			}
//			else
//			{
//				string tmp="";
//				while(st.top()!='[')
//				{
//					tmp=st.top()+tmp;
//					st.pop();
//				}
//				st.pop();
//				string num="";
//				
//				while (st.size() && st.top() >= '0' && st.top() <= '9')
//                {
//                    num = st.top() + num;
//                    st.pop();
//                }
//                if (num == "")
//                    num = "1";
//				int times=toNum(num);
//				string xin="";
//				for(int i=0;i<times;i++)
//				{
//					xin+=tmp;
//				}
//				for(int i=0;i<xin.size();i++)
//					st.push(xin[i]);
//			}
//		}
//		string ans="";
//		while(st.size()!=0)
//		{
//			ans=st.top()+ans;
//			st.pop();
//		}
//		cout<<ans;
//		cin>>n;
//		ll a[n+5];
//		for(ll i=0;i<n;i++)
//			cin>>a[i];
//		stack<ll> st;
//		st.push(0);
//		ll ans=0;
//		ll i=1;
//		while(i<n)
//		{
//			if(a[i]<a[st.top()])
//			{
//				ll h=a[st.top()];
//				st.pop();
//				if(st.size()==0)
//				{
//					ll len=i;
//					ans=max(ans,len*h);
//					st.push(i);
//					i++;
//				}
//				else 
//				{
//					ll len=i-st.top()-1;
//					ans=max(ans,len*h);	
//				}
//			}
//			else 
//			{
//				st.push(i);
//				i++;
//			}
//		}
//		while(st.size()!=0)
//		{
//			ll h=a[st.top()];
//			st.pop();
//			if(st.size()==0)
//			{
//				ll len=i;
//				ans=max(ans,len*h);
//			}
//			else 
//			{
//				ll len=i-st.top()-1;
//				ans=max(ans,len*h);
//			}
//		}
//		cout<<ans;
//		string s;
//		cin>>s;
//		stack<char> st;
//		int ans=0;
//		for(int i=0;i<s.size();i++)
//		{
//			if(s[i]=='(')
//				st.push(s[i]);
//			else
//			{
//				if(st.size()!=0)
//				{
//					st.pop();
//					ans+=2;
//				}
//			}
//		}
//		cout<<ans;
//		set<pair<int,int>> st;
//		st.insert({1,2});
//		if(st.count({1,2})==1) cout<<"hay";
//		string s1,s2;
//		set<pair<int,int>> st;
//		queue<pair<pair<int,int>,int>> qu;
		
//		int s,x;
//		cin>>s>>x;
//		queue<pair<int,int>> qu;
//		set<int> st;
//		qu.push({s,0});
//		st.insert(s);
//		pair<int,int> cur;
//		while(qu.size()!=0)
//		{
//			cur=qu.front();
//			qu.pop();
//			if(cur.first==x)
//			{
//				cout<<cur.second;
//				break;
//			}
//			if(cur.first-1>0 && st.count(cur.first-1)==0)
//			{
//				qu.push({cur.first-1,cur.second+1});
//				st.insert(cur.first-1);
//			}
//				
//			if(cur.first<x && st.count(cur.first*2)==0)
//			{
//				qu.push({cur.first*2,cur.second+1});
//				st.insert(cur.first*2);
//			}			
//		}
//		cin>>n;
//		priority_queue<ll> pq;
//		string s;
//		cin>>s;
//		map<char,ll> mp;
//		for(ll i=0;i<s.size();i++)
//		{
//			mp[s[i]]++;
//		}
//		for(auto x:mp)
//		{
//			pq.push(x.second);
//		}
//		while(n--)
//		{
//			ll cur=pq.top();
//			cur--;
//			pq.pop();
//			pq.push(cur);
//		}
//		ll ans=0;
//		while(pq.size()!=0)
//		{
//			ans+=(pq.top()*pq.top());
//			pq.pop();
//		}
//		cout<<ans;
//		string s;
//		cin>>s;
//		stack<string> st;
//		for(int i=s.size()-1;i>=0;i--)
//		{
//			if(s[i]=='*' or s[i]=='/' or s[i]=='+' or s[i]=='-')
//			{
//				string s1,s2;
//				s1=st.top();
//				st.pop();
//				s2=st.top();
//				st.pop();
//				string tmp="";				
//				tmp+=s1;
//				tmp+=s2;
//				tmp+=s[i];
//				st.push(tmp);
//			}
//			else
//			{
//				string tmp="";
//				tmp+=s[i];
////				cout<<tmp<<" ";
//				st.push(tmp);
//			}
//		}
//		cout<<st.top();
//		string s;
//		cin>>s;
//		stack<string> st;
//		for(int i=0;i<s.size();i++)
//		{
//			if(s[i]=='+' or s[i]=='-' or s[i]=='*' or s[i]=='/')
//			{
//				string s1,s2;
//				s1=st.top();
//				st.pop();
//				s2=st.top();
//				st.pop();
//				string tmp="";
//				tmp+=s[i];
//				tmp+=s2;
//				tmp+=s1;
//				st.push(tmp);
//			}
//			else
//			{
//				string tmp="";
//				tmp+=s[i];
////				cout<<tmp<<" ";
//				st.push(tmp);
//			} 
//		}
//		cout<<st.top();
//		string s;
//		cin>>s;
//		if(check2(s)) cout<<"YES";
//		else cout<<"NO";
//		cin>>n;
//		int a[n+5];
//		for(int i=1;i<=n;i++)
//			cin>>a[i];
//		stack<int> st;
//		vector<int> ans;
//		ans.push_back(-1);
//		for(int i=n;i>=1;i--)
//		{
//			if(st.size()==0) st.push(a[i]);
//			else
//			{
//				while(st.size()!=0 && a[i]>=st.top())
//				{
//					st.pop();
//				}
//				if(st.size()==0)
//				{
//					ans.push_back(-1);
//					st.push(a[i]);
//				}
//				else 
//				{
//					ans.push_back(st.top());
//					st.push(a[i]);
//				}
//					
//					
//			}
//		}
//		for(int i=ans.size()-1;i>=0;i--)
//		{
//			cout<<ans[i]<<" ";
//		}
//		cout<<endl;
//		cin>>n;
//		int x;
//		cin>>x;
//		int a[n+5];
//		for(int i=0;i<n;i++) cin>>a[i];
//		if(binary_search(a,0,n-1,x)!=-1) cout<<"1";
//		else cout<<"-1";
//		mp.clear();
//		cin>>n;
//		int a[n+5];
//		for(int i=0;i<n;i++)
//		{
//			cin>>a[i];
//			mp[a[i]]++;
//		}
//		sort(a,a+n,cmp);
//		for(int i=0;i<n;i++)
//			cout<<a[i]<<" ";
//		int n;
//		cin>>n;
//		int a[n+5];
//		map<int,int> mp;
//		for(int i=0;i<n;i++)
//		{
//			cin>>a[i];
//			mp[a[i]]++;
//		}
//		int cnt=0;
//		for(auto x:mp)
//		{
//			if(x.second>=2)
//				cnt+=(x.second-1);
//		}
//		int s1=*max_element(a,a+n);
//		int s2=*min_element(a,a+n);
//		int ans=(s1-s2)+1-(n-cnt);
//		cout<<ans;
//		cin>>n>>k;
//		int a[n+5];
//		int b[k+5];
//		for(int i=0;i<n;i++) cin>>a[i];
//		for(int j=0;j<k;j++) cin>>b[j];
//		sort(a,a+n);
//		sort(b,b+k);
//		merge(a,b,n,k);
//		cin>>n;
//		int a[n+5];
//		for(int i=0;i<n;i++)
//			cin>>a[i];
//		sort(a,a+n);
//		if(a[0]>=0)
//		{
//			cout<<a[0]+a[1];
//		}
//		else if(a[n-1]<=0)
//		{
//			cout<<a[n-2]+a[n-1];
//		}
//		else 
//		{
//			int s1=a[0]+a[n-1];
//			
//		}
//		cin>>n>>k;
//		int a[n+5];
//		for(int i=0;i<n;i++)
//		{
//			cin>>a[i];
//		}
//		sort(a,a+n);
//		int id;
//		int cnt=0;
//		for(int i=0;i<n;i++)
//		{
//			id=lower_bound(a+i+1,a+n,k-a[i])-a;
////			cout<<id<<endl;
//			if(id!=n)
//			{
//				if(a[id]+a[i]==k)
//				{
//					cnt++;
//					id+=1;
//					while(a[id++]==(k-a[i]))
//						cnt++;
//				 } 	
//			 } 
//		}
//		cout<<cnt;
//		cin>>n;
//		int a[n+5];
//		for(int i=1;i<=n;i++)
//		 	cin>>a[i];
//		int l,r;
//		bool d=true;
//		for(int i=1;i<=n;i++)
//		{
//			int min=i;
//			for(int j=i+1;j<=n;j++)
//			{
//				if(a[j]<a[min])
//				{
//					min=j;
//					d=false;
//					break;
//				}
//			}
//			if(a[i]!=a[min])
//			{
//				l=i;
//				break;
//			}
//		}
//		for(int i=n;i>=1;i--)
//		{
//			int max=i;
//			for(int j=i-1;j>=1;j--)
//			{
//				if(a[j]>a[i])
//				{
//					max=j;
//					d=false;
//					break;
//				}
//			}
//			if(a[i]!=a[max])
//			{
//				r=i;
//				break;
//			}
//		}
//		cout<<l<<" "<<r;
//		
//		cout<<l<<" "<<r;
//		cin>>n>>k;
//		int a[n+5];
//		int b[k+5];
//		set<int> st;
//		map<int,int> mp;
//		for(int i=0;i<n;i++)
//		{
//			cin>>a[i];
//			st.insert(a[i]);
//			mp[a[i]]++;
//		}
//		for(int i=0;i<k;i++)
//		{
//			cin>>b[i];
//			st.insert(b[i]);
//			mp[b[i]]++;
//		}
//		for(auto x:st)
//			cout<<x<<" ";
//		cout<<endl;
//		for(auto x:mp)
//		{
//			if(x.second>=2) 
//				cout<<x.first<<" ";
//		}
//		cin>>n;
//		int a[n+5];
//		for(int i=0;i<n;i++)
//			cin>>a[i];
//		int cnt=0;
//		for(int i=0;i<n;i++)
//		{
//			int min=i;
//			for(int j=i+1;j<n;j++)
//			{
//				if(a[j]<a[min]) min=j;
//			}
//			if(a[min]!=a[i])
//			{
//				swap(a[min],a[i]);
//				cnt++;
//			}
//		}
//		cout<<cnt;
//		cin>>n>>k;
//		set<int> st;
//		int tmp;
//		int a[n+5];
//		for(int i=0;i<n;i++)
//		{
//			cin>>tmp;
//			st.insert(tmp);
//		}
//		int ind=1,id=1;
//		for(auto x:st)
//		{
//			a[ind++]=x;
//		}
//		n=ind-1;
//		int b[1005];
//		for(int i=1;i<=k;i++)
//		{
//			b[i]=i;
//		}
//		while(1)
//		{
//			for(int l=1;l<=k;l++)
//				cout<<a[b[l]]<<" ";
//			cout<<endl;
//			int i=k;
//			while(i>=1 && b[i]==n-k+i) i--;
//			if(i==0) break;
//			b[i]++;
//			for(int j=i+1;j<=k;j++) b[j]=b[j-1]+1;
//		} 
//		int n;
//		cin>>n;
//		int a[n+5];
//		for(int i=1;i<=n;i++)
//			cin>>a[i];
//		sort(a+1,a+n+1);
//		int b[n+5];
//		for(int i=1;i<=n;i++)	b[i]=i;
//		while(1)
//		{
//			for(int i=1;i<=n;i++)
//			{
//				cout<<a[b[i]]<<" ";
//			}
//			cout<<endl;
//			int i=n-1;
//			while(b[i]>b[i+1] && i>=1) i--;
//			if(i==0) break;
//			int j=n;
//			while(b[j]<b[i]) j--;
//			swap(b[j],b[i]);
//			sort(b+i+1,b+n+1);
//			
//		}
//		string s="";
//		for(int i=0;i<n;i++) s+='6';
//		while(1)
//		{
//			int i=n-1;
//			while(i>=0 && s[i]=='8') i--;
//			if(i==-1) break;
//			s[i]='8';
//			for(int j=i+1;j<n;j++) s[j]='6';
//			if(check1(s)) cout<<s<<endl;
//		}
//		cin>>n>>k;
//		string form="";
//		for(int i=0;i<n;i++)
//		{
//			form+=('A'+i);
//		}
//		string s;
//		for(int i=0;i<k;i++)
//			s+=('A'+i);
//		cout<<s<<endl;
//		while(1)
//		{
//			int i=s.size()-1;
//			while(i>=0 && s[i]==form[n-k+i]) i--;
//			if(i==-1) break;
//			s[i]=s[i]+1;
//			for(int j=i+1;j<n;j++)
//			{
//				s[j]=s[j-1]+1;
//			}
//			cout<<s<<endl;
//		}
		
//		cout<<form;
//		stt=1;
//		cin>>n>>k;
//		for(int i=1;i<=k;i++)
//			cin>>a[i];
////		for(int i=1;i<=k;i++)
////			b[i]=i;
//b[0]=0;
//		Try(1);
//		int n;
//		cin>>n;
//		int a[n+5];
//		for(int i=1;i<=n;i++)
//			cin>>a[i];
//		int x[n+5];
//		for(int i=1;i<=n;i++)
//			x[i]=i;
//		int stt=1;
//		while(1)
//		{
//			if(check(a,x,n))
//			{
//				cout<<stt;
//				break;
//			}
//			int i=n-1;
//			while(x[i]>x[i+1] && i>=1) i--;
//			if(i==0) break;
//			int j=n;
//			while(x[j]<x[i]) j--;
//			swap(x[i],x[j]);
//			sort(x+i+1,x+n+1);
//			stt++;
//		}
		cout<<endl;
	}
}
