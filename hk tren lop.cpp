#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int pr(int x)
{
	if(x==0 && x==1 ) return 0;
	for(int i=2;i<=sqrt(x);i++)
	{
		if(x%i==0) return 0;
	}
	return 1;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
//		int a;
//		cin>>a;
//        for(int i=a;i>=2;i--)
//        {
//        	if(a%i==0 && pr(i)){
//        		cout<<i;
//        		break;
//			}
//		}
//		cout<<endl;//de tle nen liet ke cho vao set va in
//    long long max=0;
//    while(a%2==0){
//    	max/=2;
//	}
        int a;
        cin>>a;
        cout<<"1";
        for(int i=2;i<=a;i++)
        {
        	if(pr(i)) cout<<i<<" ";
            if(i%2==0) cout<<2<<" ";
            else
            {
            	if(pr(i))
			}
		}
	}
}
