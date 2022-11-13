#include<iostream>
#include<iomanip>
#define FOR(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
int main()
{
	int t;
	cin>>t;
	string a = "ABBADCCABDCCABD";
	string b = "ACCABCDDBBCDDBB";
	while(t--)
	{
		
		int n;//nhap ma de
		cin>>n;
		float mark=0;
		if(n==101)
		{
			FOR(i,0,14){
			char s;
			cin>>s;
			if(s==a[i])
			{
				mark++;
			}
			}			
		}
		else
		{
			FOR(i,0,14){
			   char s;
			   cin>>s;
			   if(s==b[i])
			   {
			   	mark++;
				}	
			}
			
		}
		mark=mark*10/15;
		cout<<fixed<<setprecision(2)<<mark<<endl;
	}
}
