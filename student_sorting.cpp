#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

struct Student {
    string id,name,c,email;
};

void in(Student a[],int n) {
    for (int i = 0; i < n; ++i) {
        cin >> a[i].id;
        getline(cin>>ws,a[i].name);
        cin >> a[i].c >> a[i].email;
    }
}

void out(Student a[],int n) {
    for (int i = 0; i < n; ++i) {
        cout << a[i].id << " " << a[i].name << " " << a[i].c << " " << a[i].email << endl;
    }
}

bool cmp(Student &a,Student &b) {
    if (a.c==b.c) return a.id<b.id;
    else return a.c<b.c;
}

int main() {
    int t;
    cin >> t;
    Student s[5000];
    in(s,t);
    sort(s,s+t,cmp);
    out(s,t);
    return 0;
}