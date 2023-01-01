#include<bits/stdc++.h>
#define ll long long
using namespace std;
int in(string x)
{
	int res=0;
	for(int i=0;i<x.size();i++)
	{
		res+=((x[i]-'0')*pow(2,x.size()-i-1));
	}
	return res;
}
struct mt
{
	int x,y,cnt;	
};
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		string s;
		getline(cin,s);
		stringstream ss(s);
		string tok;
		stack<string> st;
		while(ss>> tok)
		{
			st.push(tok);
		}
		while(st.size()!=0)
		{
			cout<<st.top()<<" ";
			st.pop();
		}
		cout<<endl;
//		string s;
//		cin>>s;
//		stack<ll> st;
//		st.push(-1);
//		ll ans=0;
//		ll n=s.size();
//		for(int i=0;i<n;i++)
//		{
//			if(s[i]=='(')
//			{
//				st.push(i);
//			}
//			else
//			{
//				if(st.size()!=0) st.pop();
//				if(st.size()!=0) 
//				{
//					ans=max(ans,i-st.top());
//				}
//				else st.push(i);
//			}
//		}
//		cout<<ans<<endl;
//		string s;
//		cin>>s;
//		stack<ll> st;
//		ll ans=0;
//		ll n=s.size();
//		ll a[n+5];
//		for(ll i=0;i<s.size();i++)
//		{
//			if(s[i]=='(')
//			{
//				st.push(i);
//			}
//			else
//			{
//				if(st.size()!=0)
//				{
//					if(s[st.top()]=='(')
//					{
//						a[i]=1;
//						a[st.top()]=1;
//						st.pop();
//					}
//				}
//				else 
//					a[i]=0;
//			}
//			
//		}
//		while(st.size()!=0)
//		{
//			a[st.top()]=0;
//			st.pop();
//		}
//		ll cnt=0;
//		for(ll i=0;i<n;i++) 
//		{
//			if(a[i]==1) cnt++;
//			else cnt=0;
//			ans=max(ans,cnt);	
//		}
//		cout<<ans;
//		cout<<endl;
//		string s;
//		cin>>s;
//		stack<int> st;
//		for(int i=s.size();i>=0;i--)
//		{
//			if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/')
//			{
//				int s1,s2;
//				s1=st.top();
//				st.pop();
//				s2=st.top();
//				st.pop();
//				if(s[i]=='+')
//				{
//					int x=s2+s1;
//					st.push(x);
//				}
//				else if(s[i]=='-')
//				{
//					int x=s1-s2;
//					st.push(x);
//				}
//				else if(s[i]=='*')
//				{
//					int x=s2*s1;
//					st.push(x);
//				}
//				else 
//				{
//					int x=s1/s2;
//					st.push(x);
//				}
//			}
//			else
//				st.push(s[i]-'0');
//		}
//		cout<<st.top()<<endl;
//		string s;
//		cin>>s;
//		stack<int> st;
//		for(int i=0;i<s.size();i++)
//		{
//			if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/')
//			{
//				int s1,s2;
//				s1=st.top();
//				st.pop();
//				s2=st.top();
//				st.pop();
//				if(s[i]=='+')
//				{
//					int x=s2+s1;
//					st.push(x);
//				}
//				else if(s[i]=='-')
//				{
//					int x=s2-s1;
//					st.push(x);
//				}
//				else if(s[i]=='*')
//				{
//					int x=s2*s1;
//					st.push(x);
//				}
//				else 
//				{
//					int x=s2/s1;
//					st.push(x);
//				}
//			}
//			else
//				st.push(s[i]-'0');
//		}
//		cout<<st.top()<<endl;
	}
//		string ans="";
//		map<char,int> mp;
//		mp['+']=0;
//		mp['-']=0;
//		mp['*']=1;
//		mp['/']=1;
//		mp['(']=-1;
//		mp[')']=-1;
//		string s;
//		cin>>s;
//		stack<string> st;
//		for(int i=s.size();i>=0;i--)
//		{
//			if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/')
//			{
//				if(st.size()!=0)
//				{
//					string s1,s2;
//					s1=st.top();
//					st.pop();
//					s2=st.top();
//					st.pop();
//					string tmp="(";
//					tmp=tmp+s1+s[i]+s2+")";
//					st.push(tmp);
//				}
//				else 
//				{
//					string tmp="";
//					tmp+=s[i];
//					st.push(tmp);
//				}
//					
//			}
//			else 
//			{
//				string tmp="";
//				tmp+=s[i];
//				st.push(tmp);
//			}
//				
//		}
////		cout<<st.top()<<endl;
//		string inf=st.top();
//		stack<char> st1;
////		string ans="";
//		for(int i=0;i<inf.size();i++)
//		{
//			// ( ) alpha +
//			if(inf[i]=='+' or inf[i]=='-' or inf[i]=='*' or inf[i]=='/')
//			{
//				if(st1.size()!=0)
//				{
//					while(mp[st1.top()]>=inf[i])// */ > +-
//					{
//						ans+=st1.top();
//						st1.pop();
//					}
//					st1.push(inf[i]);
// 				}
//				else st1.push(inf[i]);
//			}
//			else if(inf[i]=='(')
//				st1.push(inf[i]);
//			else if(inf[i]==')')
//			{
//				while(st1.top()!='(')
//				{
//					ans+=st1.top();
//					st1.pop();
//				}
//				st1.pop();
//			}
//			else ans+=inf[i];
//		}
//		cout<<ans<<endl;
//		string s;
//		cin>>s;
//		stack<string> st;
//		for(int i=s.size()-1;i>=0;i--)
//		{
//			if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/')
//			{
//				string s1,s2;
//				s1=st.top();
//				st.pop();
//				s2=st.top();
//				st.pop();
//				string res="(";
//				res=res+s1+s[i]+s2+")";
//				st.push(res);
//			}
//			else 
//			{
//				string tmp="";;
//				tmp+=s[i];
//				st.push(tmp);
//			}
//		}
//		cout<<st.top()<<endl;
//		int n,m;
//		cin>>n>>m;
//		int a[n+5][m+5];
//		for(int i=1;i<=n;i++) 
//			for(int j=1;j<=m;j++) 
//				cin>>a[i][j];
//		queue<mt> qu;
//		mt tmp;
//		tmp.cnt=0;tmp.x=1;tmp.y=1;
//		bool d=true;
//		qu.push(tmp);
//		mt cur;
//		mt nxt;
//		set<pair<int,int>> st;
//		st.insert({tmp.x,tmp.y});
//		while(qu.size()!=0)
//		{
//			cur=qu.front();
//			qu.pop();
//			if(cur.x==n && cur.y==m)
//			{
//				d=false ;
//				cout<<cur.cnt;
//				break;
//			}
//			nxt.x=cur.x;
//			nxt.y=cur.y+a[cur.x][cur.y];
//			nxt.cnt=cur.cnt+1;
//			if(nxt.y>=1 && nxt.y<=m && st.count({nxt.x,nxt.y})==0)
//			{
//				qu.push(nxt);
//				st.insert({nxt.x,nxt.y});
//			 } 
//			nxt.y=cur.y;
//			nxt.x+=a[cur.x][cur.y];
//			if(nxt.x>=1 && nxt.x<=n && st.count({nxt.x,nxt.y})==0)
//			{
//				qu.push(nxt);
//				st.insert({nxt.x,nxt.y});
//			 } 
//		}
//		if(d) cout<<"-1";
//		cout<<endl;
	}	
//		string s;
//		cin>>s;
//		stack<char> st;
//		for(int i=0;i<s.size();i++)
//		{
//			if(s[i]!=')')
//			 	st.push(s[i]);
//			else
//			{
//				if(st.size()!=0)
//			 	{
//			 		if(st.top()=='(')
//			 		{
//			 			st.pop();
//					}
//					else
//					{
//						st.push(s[i]);
//					}
//					
//				}
//				else st.push(s[i]);
//			}
//		} 
//		string nxt="";
//		while(st.size()!=0)
//		{
//			nxt=st.top()+nxt;
//			st.pop();
//		}
//		int ans=0;
//		for(int i=0;i<nxt.size()-1;i+=2)
//		{
//			if(nxt[i]=='(' && nxt[i+1]=='(') ans+=1;
//			if(nxt[i]==')' && nxt[i+1]==')') ans+=1;
//			if(nxt[i]==')' && nxt[i+1]=='(') ans+=2;
//		}
//		cout<<ans;
//		cout<<endl;
//	}
//		string s;
//		stack<int> st;
//		cin>>s;
//		int n=s.size();
//		int a[n+5];
//		for(int i=0;i<n;i++)
//		{
//			if(s[i]!=')')
//			{
//				st.push(i);
//			}
//			else
//			{
//				if(st.size()!=0)
//				{
//					a[i]=1;
//					while(s[st.top()]!='(')
//					{
//						a[st.top()]=2;
//						st.pop();
//					}
//					a[st.top()]=0;
//					st.pop();
//				}
//				else
//				{
//					a[i]=-1;
//				}
//			}
//		}
//		while(st.size()!=0)
//		{
//			a[st.top()]=-1;
//			st.pop();
//		}
//		for(int i=0;i<n;i++)
//		{
//			if(a[i]==2)
//				cout<<s[i];
//			else
//				cout<<a[i];
//		}
//		cout<<endl;
//	}

