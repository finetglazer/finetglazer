#include<bits/stdc++.h>
using namespace std;
struct sv{
    int stt;
    string id, name, cls, email, ct;
};
void nhap(sv a[], int n){
    for(int i = 0; i < n; i++){
        a[i].stt = i + 1;
        cin >> a[i].id;
        cin.ignore();
        getline(cin, a[i].name);
        cin >> a[i].cls >> a[i].email;
        cin >> a[i].ct;
    }
}
void sx(sv a[], int n){
    for(int i = 0; i < n; i++){
        sort(a, a + n, [](sv a, sv b){
            return a.id < b.id;
        });
    }
}
void in(sv a[], int n, string &s){
    for(int i = 0; i < n; i++){
        if(s.compare(a[i].ct)==0){
            cout << a[i].stt << " " << a[i].id <<" " << a[i].name << " " << a[i].cls <<" "<<a[i].email<<" "<<a[i].ct<<endl;
        }
    }
}
int main(){
    int n; cin >> n;
    struct sv a[101];
    nhap(a, n);
    string s; cin >> s;
    sx(a, n);
    in(a, n, s);
}