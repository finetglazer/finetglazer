// #include<stack> // thư viện
// Ví dụ khai báo stack kiểu int 
// stack<int> s; (nếu kiểu kí tự thì khia báo stack<char>s)
// s.size() : trả về kích thước hiện tại của stack (số phần tử trong stack). 
// s.empty() : true (1) stack nếu rỗng, và (0) ngược lại.
// s.push(x) : đẩy phần tử x vào đỉnh stack.
// s.pop() : loại bỏ phẩn tử ở đỉnh của stack. 
// s.top() : truy cập tới phần tử ở đỉnh stack.
// Tất cả hàm trên đều có Độ phức tạp O(1);
#include<bits/stdc++.h>
using namespace std;
int main()
{
    // int a;
    // cin>>a;
    // stack<int> st;
    // while(a!=0)
    // {
    //     st.push(a%2);
    //     a/=2;
    // }
    // int x=st.size();
    // for(int i=0;i<x;i++)
    // {
    //     cout<<st.top();
    //     st.pop();
    // }
    // string a;
    // getline(cin,a);
    // stack<char> st;
    // // ( push 
    // // ) top (  thif pop or false
    // bool d=true;
    // for(int i=0;i<a.size();i++)
    // {
    //     if(a[i]=='(') st.push(a[i]);
    //     if(a[i]==')')
    //     {
    //         if(st.top()=='(') st.pop();
    //         else  
    //         {
    //             d=false;
    //             break;
    //         }
    //     }
    // }
    // if(d) cout<<"True";
    // else cout<<"0";
    // int a[1000];
    // int n;
    // cin>>n;
    // int b[1000];
    // for(int i=0;i<n;i++) cin>>a[i];
    // stack<int> st;
    // for(int i=0;i<n;i++)
    // {
    //     if(i==0) st.push(a[i]);
    //     else if(st.top()>a[i])
    //     {
    //         st.push(a[i]);
    //     }
    //     else 
    //     {
    //         // 6 3 2
    //         while(!st.empty()) 
    //         {
    //             cout<<a[i]<<" ";
    //             st.pop();
    //         } 
    //         st.push(a[i]);
    //     }
    // }
    // while(!st.empty()) 
    // {
    //     cout<<"-1 ";
    //     st.pop();
    // } 
    // max rectangle
    int a[1000];
    int n;cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int i=0;
    stack<int> st;
    int max=0;
    while(i<n)
    {
        if(st.empty()) 
        {
            st.push(i);
            i++;
        }
        while(a[st.top()]<=a[i])
        {
            st.push(i);
            i++;
        }
        int idx=st.top();
        st.pop();
        if(st.empty())
        {
            int s=a[idx]*i;
            if(max<s) max=s;
        }
        else 
        {
            int s=a[idx]*(i-1-st.top());
            if(max<s) max=s;
        }
    }
    while(!st.empty())
    {
        int idx=st.top();
        st.pop();
        if(st.empty())
        {
            int s=a[idx]*i;
            if(max<s) max=s;
        }
        else 
        {
            int s=a[idx]*(i-1-st.top());
            if(max<s) max=s;
        }
        
    }
        cout<<max;
}