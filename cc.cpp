#include<bits/stdc++.h>
using namespace std;
// string nhan(string a, string b){
//     string s="";
//     int l=a.length();
//     string s1[l];
//     for(int i=l-1;i>=0;i--){
//         s1[i]=nhanNho(a[i],b);
//         s1[i].insert(s1[i].length(),l-i-1,'0');   
//         s=cong(s,s1[i]);
//     }
//     return s;
// }
int main()
{
    string s;
    cin>>s;
    s.insert(2,"0000");
    cout<<s;
}
