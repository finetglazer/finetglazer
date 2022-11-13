#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main(){
    ifstream input1("DATA.in");
    long long ans = 0;
    string token;
    while (input1 >> token) {
        int kq = 0, a;
        try {
            a = stoi(token);
            kq = 1;
        }
        catch(...) {
            int kq = 0;
        }
        if (kq) ans += a;
    }
    cout << ans;
}