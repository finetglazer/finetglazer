#include<iostream>
using namespace std;
int ucln(int a, int b)
{
	if(a==0 || b==0) return a+b;
	while(a!=b)
	{
	    if(a>b) a-=b;
	       	
	    else    b-=a;
	}
	return a;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
// x 2 , y4 --> ucln= xory;
// x=2 ,y3 --> ucln = a;
// x=2 ,y6 --> ucln = xor y;
// x=3,y4 --> ucln=a;
// x=1,y1--> ucln=a;
// x3,y5--> ucln=a;
		long long x,y,a;
		cin>>a>>x>>y;
		if(x%2==0 && y%2!=0) cout<<a;
        else if(x%2!=0 && y%2==0) cout<<a;
        else if(x%2!=0 && y%2!=0) cout<<a;
        else{
        	if(x>y){
        		long long b[y];
				for(long long i=0;i<y;i++)
        		{
        			b[i]=a;
				}
				for(long long i=0;i<y;i++)
				{
					cout<<b[i];
				}
			}
			else {
				long long b[x];
				for(long long i=0;i<x;i++)
        		{
        			b[i]=a;
				}
				for(long long i=0;i<x;i++)
				{
					cout<<b[i];
				}
			}
		}
		cout<<endl;
	}
}
