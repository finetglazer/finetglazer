#include<iostream>
using namespace std;
int main()
{
	int a[105],b[105];
	int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int j=0;j<m;j++) cin>>b[j];
    int k;
    cin>>k;
    for(int i=0;i<k;i++)
    {
       cout<<a[i]<<" ";
	}
	for(int j=0;j<m;j++) cout<<b[j]<<" ";
	for(int i=k;i<n;i++) cout<<a[i]<<" ";
}
