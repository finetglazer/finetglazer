// #include<queue> // thư viện queue
// Ví dụ khai báo queue kiểu int 
// queue <int> s;
// s.size() : trả về kích thước hiện tại của queue. 
// s.empty() : true nếu queue rỗng, và ngược lại
// s.push(x) : đẩy x vào cuối queue. 
// s.pop(): loại bỏ phần tử (ở đầu). 
// s.front() : trả về phần tử ở đầu
// s.back(): trả về phần tử ở cuối. 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    // int n;
    // cin>>n;
    // queue<string> qe;
    // qe.push("1");
    // vector<string> vv;
    // vv.push_back("1");
    // int tmp=1;
    // while(tmp<n)
    // {
    //     string x = qe.front();
    //     vv.push_back(x+'0');
    //     vv.push_back(x+'1');
    //     qe.pop();
    //     qe.push(x+'0');
    //     qe.push(x+'1');
    //     tmp+=2;
    // }
    // for(int i=0;i<n;i++)
    // {
    //     cout<<vv[i]<<" ";
    // }
    // int n;
    // cin>>n;
    // queue<string> st;//
    // vector<string> vv;
    // st.push("9");
    // int end=0;
    // // 90 99 900 
    // bool d=true;
    // while(d)
    // {
    //     int x=0;
    //     string str=st.front();
    //     stringstream ss(str);
    //     ss>>x;
    //     // cout<<x;
    //     if(x%n==0) 
    //     {
    //         end=x;
    //         d=false;
    //     }
    //     else{
    //         // st.pop();
    //         st.push(st.front()+"0");
    //         st.push(st.front()+"9");
    //         st.pop();
    //         // 9 90 99
    //     }
    // }
    // cout<<end;
    // int n;
    // cin>>n;
    // queue<string> qu;
    // vector<string> vv;
    // qu.push("6");
    // qu.push("8");
    // vv.push_back("6");
    // vv.push_back("8");
    // // 88 86 68 66 8 6
    // bool d=true;
    // //  8 66 68 86 88 
    // while(d)
    // {
    //     if(qu.front().size()+1>n) break;
    //     qu.push(qu.front()+"6");
    //     qu.push(qu.front()+"8");
    //     vv.push_back(qu.front()+"6");
    //     vv.push_back(qu.front()+"8");
    //     qu.pop();
    // }
    // for(int i=vv.size()-1;i>=0;i--) cout<<vv[i]<<" ";
    // queue<pair<int,int>> qu;
    // set<int> st;
    // int s,t;
    // cin>>s>>t;
    // qu.push({s,0});
    // st.insert(s);
    // bool d=true;
    // int end=0;
    // int cnt=1;
    // while(d)
    // {
    //     pair<int,int> tmp=qu.front();
    //     if(tmp.first==t) {
    //         d=false;
    //         end=tmp.second;
    //     }
    //     else{
    //         int x=tmp.first;
    //         int y=tmp.second;
    //         if(st.find(x*2)==st.end() && x*2 > 0 )
    //         {
    //             qu.push({x*2,y+1});
    //         }
    //         if(st.find(x-1)==st.end() && x-1 >0)    qu.push({x-1,y+1});
    //         qu.pop();
    //         cnt++;
    //     }
    //     // 2 5 2
    //     // 
    // }
    // cout<<end;
    // queue<pair<int,int>> qu;
    // set<int> st;
    // int t,s;
    // cin>>s>>t;
    // qu.push({s,0});
    // st.insert(s);
    // int end=0;
    // bool d=true;
    // while(d)
    // {
    //     pair<int,int> tmp=qu.front();
    //     if(tmp.first==t)
    //     {
    //         end=tmp.second;
    //         d=false;
    //     }
    //     if(st.find(tmp.first*2)==st.end() && tmp.first * 2 !=0) qu.push({tmp.first*2,tmp.second+1});
    //     if(st.find(tmp.first-1)==st.end() && tmp.first -1 !=0) qu.push({tmp.first-1,tmp.second+1});
    //     qu.pop(); 
    // }
    // cout<<end;
    // int dx[4]={0,-1,1,0};
    // int dy[4]={-1,0,0,1};
    // int a[100][100];
    // int n,m;
    // cin>>n>>m;
    // pair<int,int> st,ed;
    // cin>>st.first>>st.second>>ed.first>>ed.second;
    // for(int i=0;i<n;i++)
    //     for(int j=0;j<m;j++)
    //         cin>>a[i][j];
    // queue<pair<int,int>> qu;
    // qu.push({st.first,st.second});
    // int mark[100][100];
    // for(int i=0;i<n;i++) 
    //  for(int j=0;j<m;j++)
    //     mark[i][j]=0;
    // bool d=true;
    // int end=0;
    // while(d)
    // {
    //     pair<int,int> tmp=qu.front();
    //     if(tmp.first==ed.first && tmp.second==ed.second)
    //     {
    //         end=mark[tmp.first][tmp.second];
    //         d=false;
    //     }
    //     for(int i=0;i<4;i++)
    //     {
    //         int u=tmp.first+dy[i];int v=tmp.second+dx[i];

    //         if(a[u][v]==1 && u >=0 && u<n && v>=0 && v<m)
    //         {
    //             qu.push({u,v});
    //             mark[u][v]=mark[tmp.first][tmp.second]+1;
    //         } 
    //     }
    //     a[tmp.first][tmp.second]=0;
    //     qu.pop();
    // }
    // cout<<end;
    // priority_queue<int, vector<int>, greater<int>> pq;
    // int n;
    // cin>>n;
    // int x;
    // for(int i=0;i<n;i++) 
    // {
    //     cin>>x;
    //     pq.push(x);
    // }
    // int end=0;
    // while(!pq.empty())
    // {
    //     int cnt = 0;
    //     int tmp = 0;
    //     while(cnt<2)
    //     {
    //         int x=pq.top();
    //         tmp+=x;
    //         pq.pop();
    //         cnt++;
    //     }
    //     if(!pq.empty())
    //         pq.push(tmp);
    //     end+=tmp;
    // }
    // cout<<end;
    int k;
    cin>>k;
    string s;
    cin>>s;
    map<char,int> mp;
    priority_queue <int> pq;
    for(int i=0;i<s.size();i++)
        mp[s[i]]++;
    for(pair<int,int> x: mp)
    {
        pq.push(x.second);
        // cout<<x.second<<endl;
    }
    while(k!=0)
    {
        int x=pq.top();
        pq.pop();
        x--;
        k--;
        pq.push(x);
    }
    int end=0;
    while(!pq.empty())
    {
        int x=pq.top();
        // cout<<x<<endl;
        end+=x*x;
        pq.pop();
    }
    cout<<end;
}