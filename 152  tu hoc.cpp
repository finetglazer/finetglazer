#include<iostream>
using namespace std;
int odd(int x)
{
	int res=0;
	if(x%2==0) res++;
	return res==1;
	if(res==0) return 0;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x;
	    cin>>x;
	    cout<<odd(x)<<endl;
	}
	
	
}
