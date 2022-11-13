#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a[100000];
		int n,k;
		cin>>n>>k;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(int i=0;i<n-k+1;i++)
		{
			int b[k];
			int x=i;
            for(int j=0;j<k;j++)
            {
            	b[j]=a[x++];
			}
			cout<< *max_element(b,b+k)<<" ";
		}
		cout<<endl;
	}
}
