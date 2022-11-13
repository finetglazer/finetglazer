#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    while(getline(cin,a))
    {
        for(int i=0;i<a.size();i++)
        {
            if(a[0]==' ') a.erase(a.begin());
            a[i]=tolower(a[i]);
            if(a[i]=='.' || a[i]=='!' || a[i]=='?')
            {
                a[i]='*';
            }
            if(a[i]==' ')
            {
                int j=i+1;
                while(a[j]==' ')
                {
                    a.erase(a.begin()+j);
                }
            }  
        }
        // for(int i=0;i<a.size();i++) cout<<a[i];
        stringstream ss(a);
        string tok;
        vector<string> v;
        while(getline(ss,tok,'*'))
        {
            v.push_back(tok);
        }
        for(int i=0;i<v.size();i++)
        {
            string c;
            c=v[i];
            if(c[0]==' ')
            {
                c.erase(c.begin());
                
            }
            c[0]=toupper(c[0]);
            cout<<c<<endl;
            

        }
    }
        
    
}
    
