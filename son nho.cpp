#include<bits/stdc++.h>
#include<cmath>

using namespace std;
long long Sum(long long a){
    int sum = 0;
    while(a > 0){
        sum += a%10;
        a/= 10;
    }
    return sum;
}
long long gcd(long long a, long long b){
    if(b == 0) return a;
    return gcd(b, a % b);
}
int main(){
    int t;
    cin>> t;
    while(t--){
        long long n;
        cin >> n;
        bool KT = false;
        cout << gcd(n, Sum(n)) << endl;
        if(gcd(n, Sum(n)) == 1){
            n++;
        }else if(gcd(n, Sum(n)) >= 2) {
            KT = true;
            break;
        }
        if(KT == true){
            cout << n << endl;
        }
        
    }
}
