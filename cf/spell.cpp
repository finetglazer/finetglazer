#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        // Timur;
        int x;
        cin>>x;
        string s;
        cin>>s;
        if(s.size()!=5) 
        {
            cout<<"NO"<<endl;
        }
        else{
            string x="Timur";
            int check=1;
            for(int i=0;i<5;i++)
            {
                bool d=true;
                for(int j=0;j<5;j++)
                { 
                    if(x[i]==s[j])
                    {
                        d=false;
                    }
                }
                if(d) 
                {
                    cout<<"NO"<<endl;
                    check=0;
                    break;
                }
            }
            if(check) cout<<"YES"<<endl;


        }
    }
}