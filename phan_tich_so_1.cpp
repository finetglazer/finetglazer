#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[1000];
        a[1]=n;
        cout<<"("<<n<<") ";
        int size=1;
        while(1)
        {
            int i=size;
            while(a[i]==1 && i>=1)
            {
                i--;
            }
            if(i==0) break;
            else
            {
                a[i]--;
                int d = size - i +1;
                int k1=d/a[i];
                int k2=d%a[i];
                size=i;
                if(k1)
                {
                    for(int j=1;j<=k1;j++)
                    {
                        size++;
                        a[size]=a[i];
                    }
                }
                if(k2)
                {
                    size++;
                    a[size]=k2;
                }
                cout<<"(";
                for(int j=1;j<=size;j++)
                {
                    if(j!=size)   cout<<a[j]<<" ";
                    else    cout<<a[j];
                    

                } 
                cout<<") ";
            }
        }
        cout<<endl;
    }
    
}