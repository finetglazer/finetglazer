#include<iostream>
#include<math.h>
using namespace std;
int sphenic(int x)
{//30 30/2=15;15/3=5 end
//40 40/2=20;20/2=10;
//50 50/2=25;25/5=5;(5==5)
//70 70/2=35;35/5=7;
	int res=0;
	
	for(int i=2;i<=sqrt(x);i++){
		int count=0;
		while(x%i==0)
		{
			count++;
			x/=i;
		}
		if(count>1) return 0;
		if(count==1) res++;
	}
	if(x!=1) res++;
	if(res==3) return 1 ;
}
int main()
{
	int t;
    cin>>t;
    while(t--)
    {
    	int i;
    	cin>>i;
    	if(sphenic(i)) cout<<1;
    	else cout<<0;
    	cout<<endl;
	}
}
