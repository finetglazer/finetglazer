
#include <iostream>
#include <vector>
#include<cmath>
int a[N];
using namespace std;

int main() {
    int t;
    cin >> t ;
    while(t--) {
        int n ;
        cin >> n ;
        double x = 0 ;
        FOR(i,1,n) x = sqrt(i+x);
        printf("%0.5f\n",x);
    }
    return 0 ;
}
