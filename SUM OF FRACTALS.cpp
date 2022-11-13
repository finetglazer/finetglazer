#include<iostream>
using namespace std;
int main()
{
	int n;
	long long x=0;
	cin>>n;
	for(int i=n;i>=1;i--){
		long long temp=1;
		for(int j=1;j<=i;j++)// 1*2
	    { 
		   temp*=j;
	    }
	    x+=temp;
}
	cout<<x;
	return 0;
}
