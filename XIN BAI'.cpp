
#include <bits/stdc++.h>
#include <string>
#define FOR(i,a,b) for(int i = a ; i <= b ; i++)
const int N = 1e6;
int a[N],b[N];
using namespace std;
int main()
{
//    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("output.txt","w",stdout);
    //freopen("input.txt","r",stdin);
    int n;
    string s1 = "ABBADCCABDCCABD";
    string s2 = "ACCABCDDBBCDDBB";
    cin >> n ;//test
    while(n--){
        int t ;
        cin >> t;//nhap max de
        float d = 0 ;
        if(t == 101){
            FOR(i,0,14){//for(i=0;i<14;i++)
                char s ;
                cin >> s ;
                if (s==s1[i]) d++;
                //cout << s << " " << s1[i] << endl ;
            }
        }else {
            FOR(i,0,14){
                char s ;
                cin >> s ;
                if(s==s2[i]) d++;
                //cout << s << " " << s1[i];
            }
        }
        d = (d/15)*10;
        cout<<fixed<<setprecision(2)<<d<<endl;
    }
    return 0 ;
}
