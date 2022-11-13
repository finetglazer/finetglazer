#include<bits/stdc++.h>
using namespace std;
double diem(int n){
    if(n <= 4) return 2.5;
    if(n <= 6) return 3.0;
    if(n <= 9) return 3.5;
    if(n <= 12) return 4.0;
    if(n <= 15) return 4.5;
    if(n <= 19) return 5.0;
    if(n <= 22) return 5.5;
    if(n <= 26) return 6.0;
    if(n <= 29) return 6.5;
    if(n <= 32) return 7.0;
    if(n <= 34) return 7.5;
    if(n <= 36) return 8.0;
    if(n <= 38) return 8.5;
    if(n <= 40) return 9.0;
}
double lamtron(double n){
    double tmp = n - (int) n;
    if(tmp < 0.25) return n - tmp;
    if(tmp < 0.75) return n - tmp + 0.5;
    return n - tmp + 1.0;
}
void TestCase(){
	int a, b;
    double c, d, sum=0;
    cin >> a >> b >> c >> d;
    sum += diem(a) + diem(b) + c + d;
    sum /= 4.0;
    cout << setprecision(1) << fixed << lamtron(sum) << endl;
}
int main(){
    int test;
    cin >> test;
    while(test--)	TestCase();
}