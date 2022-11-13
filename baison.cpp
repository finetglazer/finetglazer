#include<bits/stdc++.h>
using namespace std;

int n, k, a[100], ok;

void ktao(){
    for(int i = 1; i <= k; i++){
        a[i] = i;
    }
}

void sinh(){
    int i = k;
    while(i >= 1 && a[i] == n - k + i) --i;
    if(i == 0) ok = 0;
    a[i]++;
    for(int j = i + 1; j <= k; j++){
        a[j] = a[j-1] + 1;
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> k;
        ok = 1;
        char v[27] = {'A','B', 'C', 'D', 'E', 'F', 'G', 'H', 'I','J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T','U' ,'V','W', 'X', 'Y', 'Z'};
        ktao();
        while(ok){
            for(int i = 1; i <= k; i++){
                cout << v[a[i]-1];
            }
            cout << endl;
            sinh();
        }
        cout<<endl;
    }
}