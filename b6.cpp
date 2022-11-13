#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("DOCUMENT.txt", "r", stdin);
    string a;
    int page = 0;
    while (getline(cin, a)) {
        if (a.size() > 4 && a[0] == 'P' && a[1] == 'a' && a[2] == 'g' && a[3] == 'e') {
            page++;
            continue;
        }
        if (a.size() > 6 && a[0] == 'L' && a[1] == 'e' && a[2] == 'v' && a[3] == 'e' && a[4] == 'l') {
            string temp;
            for (int i = 5; i < a.size(); i++) {
                if (isdigit(a[i])) {
                    temp += a[i];
                } else {
                    break;
                }
            }
            int lev = stoi(temp);
            for (int i = 0; i < lev; i++) {
                cout << ">";
            }
            cout << &a[8] << "--- " << page << endl;
        }
    }
    return 0;
}