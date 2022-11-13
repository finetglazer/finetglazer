#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

struct Toll {
    string plate,type,seat,d,date;
};

void in(Toll a[],int n) {
    for (int i = 0; i < n; ++i) {
        cin >>a[i].plate >> a[i].type >> a[i].seat >> a[i].d >> a[i].date;
    }
}

void process(Toll a[],int n) {
    int res=0;
    for (int i = 0; i < n; ++i) {
        if (a[i].date == a[i+1].date) {
            if (a[i].d=="IN") {
                if (a[i].type=="Car") {
                    if (a[i].seat=="5") {
                        res+=10000;
                    } else {
                        res+=15000;
                    }
                } else if (a[i].type=="Truck") {
                    res+=20000;
                } else if (a[i].type=="Bus") {
                    if (a[i].seat=="29") res+=50000;
                    else res+=70000;
                }
            }
        } else {
            if (a[i].d=="IN") {
                if (a[i].type=="Car") {
                    if (a[i].seat=="5") {
                        res+=10000;
                    } else {
                        res+=15000;
                    }
                } else if (a[i].type=="Truck") {
                    res+=20000;
                } else if (a[i].type=="Bus") {
                    if (a[i].seat=="29") res+=50000;
                    else res+=70000;
                }
            }
            cout << a[i].date << ": " << res << endl;
            res=0;
        }
    }
}


int main() {
    int t;
    cin >> t;
    Toll a[t];
    in(a,t);
    process(a,t);
    return 0;
}