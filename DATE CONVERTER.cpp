#include<iostream>
using namespace std;
int main()
{
	int i;
	cin>>i;
	int y,w,d;
	y=i/365;
	i=i-y*365;
	w=i/7;
	i-=w*7;
	d=i;
	cout<<y<<" "<<w<<" "<<d;
	
}
