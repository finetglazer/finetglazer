#include<bits/stdc++.h>
using namespace std;
int x;
int n;
int a[100005];
//bool cmp(int s1,int s2)
//{
//	if(abs(x-s1)==abs(x-s2))
//	{
//		int tmp1=0,tmp2=0;
//		for(int i=0;i<n;i++)
//		{
//			if(a[i]==s1) tmp1=i;
//			if(a[i]==s2) tmp2=i;
//		}
//		return tmp1<tmp2;
//	}
//	return abs(x-s1)<abs(x-s2);
//}
//int dem(int a[],int b[],int n)
//{
//	int cnt=0;
//	bool d=true;
//	for(int i=1;i<=n;i++)
//	{
//		d=true;
//		for(int j=1;j<=n;j++)
//		{
//			if(a[i]==b[j]) d=false;
//		}
//		if(d) cnt++;
//	}
//	return cnt;
//}
//bool dk(int a[],int n)
//{
//	// 5 2 1 2 5 4 4  1 2 3 4
//	for(int i=1;i<=n/2;i++)
//	{
//		if(a[i]!=a[n-i+1]) return false;
//	}
//	return true;
//}
//void ck(int a[],int n)
//{
//	
//} 
//void Try(int i)
//{
//	for(int j=0;j<=1;j++)
//	{
//		a[i]=j;
//		if(i==n)
//		{
//			if(dk(a,n)) in(a,n);
//		}
//		else Try(i+1);
//	}
//}
void merge(int a[],int b[],int n,int m)
{
	vector<int> hop,giao;
	int i=0,j=0;
	while(i<n && j<m)
	{
		if(a[i]<b[j])
		{
			hop.push_back(a[i]);
			i++;
		}
		else if(a[i]==b[j])
		{
			giao.push_back(a[i]);
			hop.push_back(a[i]);
			i++;
			j++;
		}
		else 
		{
			hop.push_back(b[j]);
			j++;
		}
	}
	while(i<n)
	{
		hop.push_back(a[i]);
		i++;
	}
	while(j<m)
	{
		hop.push_back(b[j]);
		j++;
	}
//	cout<<hop.size();
	for(int x=0;x<hop.size();x++) 
		cout<<hop[x]<<" ";
	cout<<endl;
	for(int x=0;x<giao.size();x++)
		cout<<giao[x]<<" ";
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{ 
		int m;
		cin>>n>>m; 
		int a[n+5],b[m+5];
		for(int i=0;i<n;i++) cin>>a[i];
		for(int j=0;j<m;j++) cin>>b[j];
		merge(a,b,n,m);
//		int n;
//		cin>>n>>x;
//		vector<int>v,vv;
//		for(int i=0;i<n;i++)
//		{
//			cin>>a[i];
//			vv.push_back(a[i]);
//			v.push_back(abs(x-a[i]));
//			
//		}
////		sort(a,a+n,cmp);
////		for(int i=0;i<n;i++) cout<<a[i]<<" ";
//		sort(v.begin(),v.end());
//		for(int i=0;i<n;i++)
//		{
//			for(int j=0;j<n;j++)
//			{
//				if(v[i]==abs(x-vv[j]))
//				{
//					cout<<vv[j]<<" ";
//					vv.erase(vv.begin()+j);
//					break;
//				}
//			}
//		}
		cout<<endl;
	}
//		int a[n+5];
//		for(int i=0;i<n;i++) cin>>a[i];
//		map<int,int> del;
//		for(int i=0;i<n;i++) del[i]=abs(x-a[i]);
//		
////		sort(a,a+n,cmp);
//		for(int i=0;i<n;i++) cout<<a[i]<<" ";
//		int j=0;
//		int k=0;
//		for(int i=0;i<n;i++)
//		{
//			if(i%2==0)
//			{
//				cout<<a[n-k-1];
//				k++;
//			}
//			else
//				cout<<a[j++];
//			cout<<" ";
//		}
////		cin>>n;
////		Try(1);
////		string s;
////		cin>>s;
////		while(1)
////		{
////			int i=s.size()-1;
////			while(s[i]=='1' && i>=0) i--;
////			if(i==-1) 
////			{
////				for(int j=0;j<s.size();j++) cout<<"0";
////			} 
////			else
////			{
////				s[i]='1';
////				for(int j=i+1;j<s.size();j++) s[j]='0';
////				cout<<s;
////			}
////			break;
////		}
//		
////		cin>>n>>k;
////		for(int i=1;i<=k;i++) cin>>a[i];
////		while(1)
////		{
////			int i=k;
////			while(a[i]==n-k+i && i>=1) i--;
////			if(i==0)
////			{
////				for(int i=1;i<=k;i++)
////					cout<<i<<" ";
////			}
////			else 
////			{
////				a[i]++;
////				for(int j=i+1;j<=k;j++)
////				{
////					a[j]=a[j-1]+1;
////				}
////				in(a,k);
////			}
////			break;
////		}
////		int n;
////		cin>>n;
////		int k=1;
////		for(int i=n;i>=1;i--) a[k++]=i;
////		in(a,n);
////		cout<<" ";
////		while(1)
////		{
////			int i=n-1;
////			while(i>=1 && a[i]<a[i+1]) i--;
////			if(i==0)
////			{
////				break;
////			}
////			else 
////			{
////				int j=n;
////				while(a[j]>a[i]) j--;
////				swap(a[i],a[j]);
////				int l=i+1,r=n;
////				while(l<r)
////				{
////					swap(a[l],a[r]);
////					l++;
////					r--;
////				}
////				in(a,n);
////				cout<<" ";
////			}
//////			break;
////		} 
////		int n;
////		cin>>n;
////		string s;
////		for(int i=1;i<=n;i++) s+='A';
////		cout<<s<<" ";
////		while(1)
////		{
////			int i=s.size()-1;
////			while(i>=0 && s[i]=='B') i--;
////			if(i==-1) break;
////			else
////			{
////				s[i]='B';
////				for(int j=i+1;j<s.size();j++) s[j]='A';
////				cout<<s<<" ";
////			}
////		}
////		cin>>n>>k;
////		string s;
////		for(int i=0;i<n;i++) s+='0';
////	
////		cin>>n;
////		Try(1);
////		string s;
////		cin>>s;
////		while(1)
////		{
////			int i=s.size()-1;
////			while(i>=0 && s[i]=='0') i--;
////			if(i==-1) 
////			{
////				for(int i=0;i<s.size();i++) cout<<'1';
////			}
////			else 
////			{
////				s[i]='0';
////				for(int j=i+1;j<s.size();j++) s[j]='1';
////				cout<<s;
////			}
////			break;
////		}
//		int b[100];
//		cin>>n>>k;
//		for(int i=1;i<=k;i++) 
//		{
//			cin>>a[i];
//			b[i]=a[i];	
//		}
//		int i=k;
//		while(i>=1 && a[i]==n-k+i) i--;
//		if(i==0) 
//		{
//			cout<<k;
//		}
//		else 
//		{
//			b[i]++;
//			for(int j=i+1;j<=k;j++) b[j]=b[j-1]+1;
//			cout<<dem(a,b,k);
//		}
//		cout<<endl;
//	}
//	// to hop tiep theo
//	
		
}
