#include<bits/stdc++.h>
using namespace std;

    int main()
    {
        string a;
        bool check1=true, check2=true;
        while(cin>>a)
        {
            check1=true;
            for(int i=0;i<a.size();i++)
            {
                if(i==0 && a[i]>='a' && a[i]<='z' && check2==true)
                {
                    a[i]=toupper(a[i]);
                    check1=false;
                }
                if(i==0 && a[i]>='A' && a[i]<='Z' && check2==true)
                {
                    check1=false;
                }
                check2=false;
                if(i==0 && a[i]>='A' && a[i]<='Z' && check2==false && check1==true)
                {
                    a[i]=tolower(a[i]);
                }
                if(i!=0 && a[i]>='A' && a[i]<='Z') 
                {
                    a[i]=tolower(a[i]);
                }
                if(a[i]=='!' || a[i]=='.' || a[i]=='?')
                {
                    check2=true;
                    cout<<endl;
                    break;
                }
                cout<<a[i];
                if(i==a.size()-1)
                {
                    cout<<" ";
                }
            }
        }
    }

