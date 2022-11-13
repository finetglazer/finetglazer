#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        long long a , b , c, d;
        cin >> a >> b >> c >> d;
        long long thuc = pow(a,2) - pow(b,2) + 2*(a*c-b*d);
        long long ao = 2*(a*d + b*c);
        cout << thuc << " + " << ao << "i";
        cout << endl;
    }
}