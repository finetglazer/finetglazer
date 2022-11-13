// (a+b)% d=(a%d + b)%d;
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    string a;
	    cin>>a;
	    long long b;
	    cin>> b;
	    
	    //tach chuoi
	    // 12345 %10 // (1%10 * 10 +2)%10 *10
	    long long res =0;//long long vi neu nhuw thang a chia thang b du 1 so gan bang b thi tran mang
	    for(int i=0;i<a.size();i++)
	    {
	    	res=res * 10 + (a[i]-'0') ; 
	    	res=res%b;
	    	cout<<res<<endl;
		}
		
		cout<<res<<endl;
	}
}
