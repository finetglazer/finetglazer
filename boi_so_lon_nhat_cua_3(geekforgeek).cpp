#include <bits/stdc++.h>
using namespace std;
int top=0;
void populateAux(int aux[], queue<int> queue0, queue<int> queue1,
                 queue<int> queue2)
{
    
    // Put all items of first queue in aux[]
    while (!queue0.empty())
    {
        aux[top++] = queue0.front();
        queue0.pop();
    }

    // Put all items of second queue in aux[]
    while (!queue1.empty())
    {
        aux[top++] = queue1.front();
        queue1.pop();
    }

    // Put all items of third queue in aux[]
    while (!queue2.empty())
    {
        aux[top++] = queue2.front();
        queue2.pop();
    }
}
bool cal(int a[], int n)
{
    // sum and make queue 0 1 2
    sort(a, a + n);
    int sum = 0;
    queue<int> q1, q2, q0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        if (a[i] % 3 == 0)
            q0.push(a[i]);
        else if (a[i] % 3 == 1)
            q1.push(a[i]);
        else
            q2.push(a[i]);
    }
    // consider in order by the remainder of sum divide for 3
    if (sum % 3 == 1)
    {
        // delete 1 from q1;
        if (q1.size() != 0)
        {
            q1.pop();
        }
        // delete 2 mem from q2;
        else
        {
            if (q2.size() != 0)
                q2.pop();
            else
                return 0;
            if (q2.size() != 0)
                q2.pop();
            else
                return 0;
        }
    }
    else if (sum % 3 == 2)
    {
        if (q2.size() != 0)
        {
            q2.pop();
        }
        else
        {
            if (q1.size() != 0)
                q1.pop();
            else
                return 0;
            if (q1.size() != 0)
                q1.pop();
            else
                return 0;
        }
    }
    int aux[n+5];
     // Empty all the queues into an auxiliary array.
    populateAux(aux, q0, q1, q2);
 
    // sort the array in non-increasing order
    sort(aux, aux + top, greater<int>());
 
    // print the result
    for (int i = 0; i < top; ++i)
        cout << aux[i] ;
 
    return top;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        top=0;
        int n;
        cin >> n;
        int a[n + 5];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if(cal(a,n)==0)
        {
            cout<<"-1";
        }
        cout<<endl;
    }
}