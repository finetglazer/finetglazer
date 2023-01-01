#include <bits/stdc++.h>
using namespace std;
void in(int a[], int n)
{
	for (int i = 1; i <= n; i++)
		cout << a[i] << " ";
	cout << endl;
}
// quay lui
// void Try(int i,int n,int a[])
//{
//	for(int j=0;j<=1;j++)
//	{
//		a[i]=j;
//		if(i==n) in(a,n);
//		else Try(i+1,n,a);
//	}
//}
// bool x[1005];
// void Try(int i,int n,int a[])
//{
//	for(int j=1;j<=n;j++)
//	{
//		if(x[j]==false)
//		{
//			a[i]=j;
//			x[j]=true;
//			if(i==n) in(a,n);
//			else Try(i+1,n,a);
//			x[j]=false;
//		}
//	}
//}
// 1 2 3 124 125
bool x[1005];
void Try(int i, int pos, int n, int k, int a[])
{
	if (i == k + 1)
	{
		in(a, k);
		return;
	}
	for (int j = pos; j <= n - k + i; j++)
	{
		a[i] = j;
		Try(i + 1, j + 1, n, k, a);
	}
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		// sinh np
		int n, k;
		cin >> n;
		int a[n + 5];
		// Try(1,1,n,k,a);
		//		memset(a,0,sizeof(a));
		//		in(a,n);
		//		while(1)
		//		{
		//			int i=n;
		//			while(a[i]==1 && i>=1) i--;
		//			if(i==0) break;
		//			else
		//			{
		//				a[i]=1;
		//				for(int j=i+1;j<=n;j++) a[j]=0;
		//				in(a,n);
		//			}
		//		}
		// sinh hvi
		int cnt=0;
		for (int i = 1; i <= n; i++)
			a[i] = i;
		in(a, n);
		while (1)
		{
			int i = n - 1;
			while (a[i + 1] < a[i] && i >= 1)
				i--;
			if (i == 0)
				break;

			int k=n;
			while(a[k]<a[i]) k--;
			int tmp=a[k];
			a[k]=a[i];
			a[i]=tmp;
			int l=i+1;
			int r=n;
			while(l<r)
			{
				tmp=a[l];
				a[l]=a[r];
				a[r]=tmp;
				l++;
				r--;
				
			}
			cnt++;
			in(a, n);
		}
		cout<<cnt<<endl;
	}
	// sinh to hop
	//	int k;
	//	cin>>k;
	//	for(int i=1;i<=k;i++)
	//	{
	//		a[i]=i;
	//	}
	//	in(a,k);
	//	while(1)
	//	{
	//		int i=k;
	//		while(i>=1 && a[i]==n-k+i) i--;
	//		if(i==0) break;
	//		else
	//		{
	//			a[i++]++;
	//
	//		for( ;i<=k;i++) a[i]=a[i-1]+1;
	//			in(a,k);
	//
	//		}
	//}
	//	}
}

