#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int j=1;j<=t;j++)
	{
	    int a[105],b[105];
	    int n,m;
	    cin>>n>>m;
	    int k;
	    cin>>k;
	    for(int i=0;i<n;i++) cin>>a[i];
	    for(int l=0;l<m;l++) cin>>b[l];
	    cout<<"Test "<<j<<":"<<endl; 
	    for(int i=0;i<k;i++) cout<<a[i]<<" ";
	    for(int i=0;i<m;i++) cout<<b[i]<<" ";
	    for(int i=k;i<n;i++) cout<<a[i]<<" ";
	    cout<<endl;
	}

}
