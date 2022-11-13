#include<iostream>
#include<math.h>
using namespace std;
int sqr(int x)
{
	int y=sqrt(x);
	if(y*y==x) return 1;
	else return 0;
}
int main()
{
	int a,b;
	cin>>a>>b;
	int temp;
	for(;a<b;a++)
	{
		
		if(sqr(a)) 
		{
			temp+=a;
		}
		
	}
	cout<<temp;
}
