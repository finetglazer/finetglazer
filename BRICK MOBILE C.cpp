#include<bits/stdc++.h>
using namespace std;
int main()
{
    // bohima 2 6 4 6 2 
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        cin>>a;
        vector<char> v;
        for(int i=0;i<a.length();i++)
        {
            v.push_back(a[i]);
        }
        vector<int> vv;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]=='A' || v[i]=='B' || v[i]=='C' || v[i]=='a' || v[i]=='b' || v[i]=='c' )
               vv.push_back(2);
            if(v[i]=='D' || v[i]=='E' || v[i]=='F' || v[i]=='d' || v[i]=='e' || v[i]=='f' )
               vv.push_back(3);
            if(v[i]=='g' || v[i]=='h' || v[i]=='i' || v[i]=='G' || v[i]=='H' || v[i]=='I' )
               vv.push_back(4);
            if(v[i]=='J' || v[i]=='K' || v[i]=='L' || v[i]=='j' || v[i]== 'k' || v[i]=='l' )
               vv.push_back(5);
            if(v[i]=='M' || v[i]=='N' || v[i]=='O' || v[i]=='m' || v[i]=='n' || v[i]=='o' )
               vv.push_back(6);
            if(v[i]=='P' || v[i]=='Q' || v[i]=='R' || v[i]=='S' || v[i]=='p' || v[i]=='q' ||v[i]=='r'||v[i]=='s')
               vv.push_back(7);
            if(v[i]=='T' || v[i]=='U' || v[i]=='V' || v[i]=='t' || v[i]=='u' || v[i]=='v' )
               vv.push_back(8);
            if(v[i]=='W' || v[i]=='X' || v[i]=='Y' || v[i]=='Z' || v[i]=='x' || v[i]=='y' || v[i]=='z' || v[i]=='w' )
               vv.push_back(9);
        }
        int j=vv.size()-1;
        int cnt=1;
        for(int i=0;i<j;i++)
        {
            if(vv[i]!= vv[j--])
            {
               cnt=0;
               break;
            } 
        }
        if(cnt==0) cout<<"NO";
        else cout<<"YES";
        cout<<endl;
    }
}
