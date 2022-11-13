#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	    long long s=0;
		int n,k;
		cin>>n>>k;
		vector <int> a(n);
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a.begin(),a.end());
		for(int i=0;i<n-1;i++)
        {
            int idx=lower_bound(a.begin()+i+1,a.end(),a[i]+k)-a.begin();
            if(idx==n) idx--;
            if(a[idx]>=a[i]+k) idx--;
            s+=idx-i;
        }
		cout<<s<<endl;
	}
}