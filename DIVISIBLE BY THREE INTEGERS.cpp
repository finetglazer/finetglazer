#include<iostream>
#include<cmath>
using namespace std;
long long ucln(int a, int b){
    
    if (a == 0 || b == 0){
        return a + b;
    }
    while (a != b){
        if (a > b){
            a -= b; 
        }else{
            b -= a;
        }
    }
    return a;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x,y,z,n;
		cin>>x>>y>>z>>n;
		long long bmin= x*y/ucln(x,y);
		long long bcmin= bmin*z/ucln(bmin,z);
		long long s=pow(10,n-1);
		double l=pow(10,n);
		if(bcmin>l)
		{
			cout<<"-1"<<endl;
		}
		else
		{
			long long res = s/bcmin;
			if(s % bcmin!=0) res++;
			cout<<res*bcmin<<endl; 
		}
	}
}
