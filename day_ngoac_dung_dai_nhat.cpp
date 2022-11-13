// 1) Create an empty stack and push -1 to it. 
//    The first element of the stack is used 
//    to provide a base for the next valid string. 

// 2) Initialize result as 0.

// 3) If the character is '(' i.e. str[i] == '('), 
//    push index'i' to the stack. 
   
// 2) Else (if the character is ')')
//    a) Pop an item from the stack (Most of the 
//       time an opening bracket)
//    b) If the stack is not empty, then find the
//       length of current valid substring by taking 
//       the difference between the current index and
//       top of the stack. If current length is more 
//       than the result, then update the result.
//    c) If the stack is empty, push the current index
//       as a base for the next valid substring.

// 3) Return result.
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    string s;
    while(t--)
    {
        cin>>s;
        stack<ll> st;
        ll ans=0;
        st.push(-1);
        for(ll i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                st.push(i);
            }
            else
            {
                if(!st.empty()) st.pop();
                if(!st.empty())
                {
                    ans=max(ans,i-st.top());
                }
                else st.push(i);
            }
        }
        cout<<ans;
        cout<<endl;
    }
}