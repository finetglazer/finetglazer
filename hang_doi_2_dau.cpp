// cấu trúc deque
//      thủ tục construct
//           gán L là một danh sách rỗng
//      thủ tục push_front(x)
//           chèn x vào đầu của L
//      thủ tục push_back(x)
//           chèn x vào cuối L
//      hàm pop_front
//           xóa phần tử đầu của L, trả về giá trị của phần tử đó
//      hàm pop_back
//           xóa phần tử cuối của L, trả về giá trị của phần tử đó 
//      hàm peek_front
//           trả về giá trị của phần tử đầu L
//      hàm peek_back
//           trả về giá trị của phần tử cuối L
//      hàm size
//           trả về kích thước của L
//      thủ tục make_emp
// “PUSHFRONT x”: Thêm phần tử x vào đầu của dequeue (0 ≤ x ≤ 1000).

// “PRINTFRONT”: In ra phần tử đầu tiên của dequeue. Nếu dequeue rỗng, in ra “NONE”.

// “POPFRONT”: Xóa phần tử đầu của dequeue. Nếu dequeue rỗng, không làm gì cả.

// “PUSHBACK x”: Thêm phần tử x vào cuối của dequeue (0 ≤ x ≤ 1000).

// “PRINTBACK”: In ra phần tử cuối của dequeue. Nếu dequeue rỗng, in ra “NONE”.

// “POPBACK”: Xóa phần tử cuối của dequeue. Nếu dequeue rỗng, không làm gì cả.
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
    int t;
    cin>>t;
    cin.ignore();
    deque<int> dq;
    string s;
    while(t--)
    {
        getline(cin,s);
        vector<string> vv;
        stringstream ss(s);
        string tok;
        while(ss>>tok)
        {
            vv.push_back(tok);
        }
        if(vv[0]=="PUSHBACK")
        {
            dq.push_back(toNum(vv[1]));
        }
        else if(vv[0]=="PUSHFRONT")
        {
            dq.push_front(toNum(vv[1]));
        }
        else if(vv[0]=="PRINTFRONT")
        {
            if(dq.size()==0) cout<<"NONE";
            else{
                cout<<dq.front();
            }
            cout<<endl;
        }
        else if(vv[0]=="POPFRONT")
        {
            if(dq.size()!=0) dq.pop_front();
        }
        else if(vv[0]=="PRINTBACK")
        {
             if(dq.size()==0) cout<<"NONE";
            else{
                cout<<dq.back();
            }
            cout<<endl;
        }
        else{
            if(dq.size()!=0) dq.pop_back();
        }
    }
}