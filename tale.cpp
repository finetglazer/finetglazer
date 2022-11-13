/*
b1 tao toa do
b2 tinh khoang cach bang cach tao phep cong 
b3 tinh s 
b4 tinh r


*/
#include<bits/stdc++.h>
#define PI 3.141592653589793238
using namespace std;
struct toado
{
    double x,y;
};
void in(toado &a, toado &b,toado &c)
{
    cin>>a.x>>a.y>>b.x>>b.y>>c.x>>c.y;
}
double dis( toado a, toado b)
{
    double dis;
    dis = sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
    return dis;
}
double area(toado a, toado b,toado c)
{
    double area;
    area = sqrt((dis(a,b)+dis(b,c)+dis(a,c))*(dis(a,b)+dis(b,c)-dis(a,c))*(dis(a,b)+dis(a,c)-dis(b,c))*(dis(a,c)+dis(b,c)-dis(a,b)))/4;
    return area;
}

int main()
{
//  #ifndef ONLINE_JUDGE
//  freopen("INPUT.txt","r",stdin);
//  freopen("OUTPUT.txt","w",stdout);
//  #endif
	int t;
	cin>>t;
	while(t--)
	{
		toado a,b,c;
	    in(a,b,c);
	    if(dis(a,b)+dis(a,c)<=dis(b,c))
	    {
	        cout<<"INVALID"<<endl;	        
	    } 
	    else if(dis(a,b)+dis(b,c)<=dis(a,c))
	    {
	        cout<<"INVALID"<<endl;       
	    } 
	    else if(dis(a,c)+dis(b,c)<=dis(a,b))
	    {
	        cout<<"INVALID"<<endl;
	    }
	    else
	    {
	    	cout<<fixed<<setprecision(2)<<area(a,b,c)<<endl;
		}
	}
    return 0;
}
