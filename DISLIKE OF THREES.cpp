#include<iostream>
using namespace std;
int div(int a)
{
	if(a%10==3 || a%3==0) return 0;
	else return 1;
}
int main()
{
	int k;
	cin>>k;
	int j=1;
	for(int i=1;i<=10000;i++)
	{
		if(div(i)){
			if(j==k) cout<<i;
			j++;
		}
	}
	
	}

