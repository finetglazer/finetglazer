#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		//step 1 sx cai so nho hon canh nhau
	    sort(a,a+n);
	    int tmp=0;
	    for(int i=1;i<n;i++)
	    {
	    	int cnt=a[i]-a[i-1];
	    	if(cnt>1) tmp+= cnt-1;
		}
		cout<<tmp<<endl;
	}
}
