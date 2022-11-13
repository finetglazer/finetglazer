#include<bits/stdc++.h>
using namespace std;
int main()
{
        int m,s;
        cin>>m>>s;
        // 999
        if(s>9*m || s==0) cout<<"-1 -1";
        else{
            vector<int> max;
            int k=s;
            //23 996
            while(k!=0)
            {
                if(k>9)
                {
                    max.push_back(9);
                    k-=9;
                }
                else
                {
                    max.push_back(k);
                    k=0;
                } 
            }
            if(max.size()<m) 
            {
                for(int i=max.size();i<m;i++)
                {
                    max.push_back(0);
                }
            }
            int k2=s;
            int a[m];
            int len=m-1;
            if(k2<=9)
            {
                a[0]=1;
                a[len]=k2-1;
                for(int i=1;i<len;i++)
                {
                    a[i]=0;
                }
            }
            else
            {
                // 2 15 69 3 15   159 
                while(k2!=0)
                {
                    if(k2>9)
                    {
                        a[len]=9;
                        len--;
                        k2-=9;
                    }
                    if(k2<=9 && len==0 )
                    {  
                        a[len]=k2;   
                        break;         
                    }
                    if(k2<=9 && len!=0)
                    {
                        a[0]=1;
                        a[len]=k2-1;
                        for(int i=1;i<len;i++)
                        {
                            a[i]=0;
                        }
                        break;
                    }
                }
            }
            for(int i=0;i<m;i++)
            {
                cout<<a[i];
            }
            cout<<" ";
            for(int i=0;i<max.size();i++) cout<<max[i];
            
        }
}
