#include <iostream>
#include <algorithm>
using namespace std;
 
long bsearch(long * a, long lo, long hi, long key ) {
 
    long ans = -1;
 
    while(lo <= hi) {
        int mi = (lo + hi) / 2;
        if (a[mi] <= key) { // neu a[mi] thoa man dk
            ans = mi;       // luu ket qua vao ans
            lo = mi + 1;    // thu nho pham vi tim kiem
        } else hi = mi - 1;
    }
 
    return ans;
}
 
main () {
	long n, m;
	cin>>n>>m;
	long a[n+5];
	long b[m+5];
	for (long i=0; i<n; i++) {
		cin>>a[i];
	}
	for (long i=0; i<m; i++) {
		cin>>b[i];
	}
	sort (a, a+n);
 
	long kt;
	long dem;
	for (long i=0; i<m; i++) {
		kt=b[i];
		if (kt<a[0]) {
			cout<<"0"<<endl;
		} else {
			long vt=bsearch(a, 0 , n-1, kt);
			dem=vt+1;
			cout<<dem<<endl;
		}
 
	}
}