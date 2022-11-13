#include <iostream>
#include <string>
using namespace std;
int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        string a;
        getline(cin>>ws,a);
        string t2;
        if (a[0]=='+'&&a[1]=='8'&&a[2]=='4') {
            a.erase(a.begin(),a.begin()+3);
            a="0"+a;
        }
        if (a[0]=='8'&&a[1]=='4') {
            a.erase(a.begin(),a.begin()+2);
            a="0"+a;
        }
        for (char j : a) {
            if (j>='0'&&j<='9') cout <<j;
        }
        cout << endl;
    }
    return 0;
}
