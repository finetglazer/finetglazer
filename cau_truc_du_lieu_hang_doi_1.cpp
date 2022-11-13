#include<bits/stdc++.h>
using namespace std;
int toNum(string s)
{
    int res=0;
    for(int i=0;i<s.size();i++)
    {
        res*=10;
        res+=(s[i]-'0');
    }
    return res;
}
int main()
{
//1     Trả về kích thước của queue
// 2Kiểm tra xem queue có rỗng không, nếu có in ra “YES”, nếu không in ra “NO”.
// 3Cho một số nguyên và đẩy số nguyên này vào cuối queue.
// 4Loại bỏ phần tử ở đầu queue nếu queue không rỗng, nếu rỗng không cần thực hiện.
// 5Trả về phần tử ở đầu queue, nếu queue rỗng in ra -1.
// 6Trả về phần tử ở cuối queue, nếu queue rỗng in ra -1.
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cin.ignore();   
        string s; 
        int cnt=0;
        queue<int> qu;
        while(n--)
        {
            getline(cin,s);
            vector<int> vv;
            stringstream ss(s);
            string tok;
            while(ss>>tok)
            {
                vv.push_back(toNum(tok));
            }
            if(vv[0]==3) 
            {
                qu.push(vv[1]);
            }
            else if(vv[0]==2)
            {
                if(qu.size()==0) cout<<"YES";
                else cout<<"NO";
                cout<<endl;
            }
            else if(vv[0]==1)
            {
                cout<<qu.size();
                cout<<endl;
            }
            else if(vv[0]==4)
            {
                if(qu.size()!=0)
                {
                    qu.pop();
                }
            }
            else if(vv[0]==5)
            {
                if(qu.size()!=0)
                {
                    cout<<qu.front();
                }
                else cout<<"-1";
                cout<<endl;
            }
            else if(vv[0]==6)
            {
                 if(qu.size()!=0)
                {
                    cout<<qu.back();
                }
                else cout<<"-1";
                cout<<endl;
            }
            // int k;
            // int ad;
            // cin>>k;
            // if(k==3) cin>>ad;
            // )
            
        } 
    }
}