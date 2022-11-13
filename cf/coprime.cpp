#include <bits/stdc++.h>
using namespace std;
 
// Function to find an element which
// is coprime with all array elements
int find_X(int arr[], int N)
{
 
    // Stores maximum array element
    int R = INT_MIN;
    for (int i = 0; i < N; i++)
        R = max(R, arr[i]);
 
    // Stores if index of an array is prime or not
    bool prime[1000001];
    for (int i = 0; i < 1000001; i++)
        prime[i] = true;
 
    int p = 2;
    while (p * p <= 1000002)
    {
 
        // If prime[p] is not changed,
        // then it is a prime
        if (prime[p] == true)
        {
 
            // Update all multiples of p
            for (int i = p * 2; i < 1000001; i += p)
            {
                prime[i] = false;
            }
        }
       
        // Increment p by 1
        p = p + 1;
    }
 
    prime[0] = false;
    prime[1] = false;
 
    // Traverse the range [R, 10000000 + 1]
    for (int i = R; i < 1000001; i++) {
 
        // If i is greater than R and prime
        if (i > R and prime[i] == true) {
 
            // Return i
            return i;
        }
    }
 
    // Dummy value to omit return error
    return -1;
}
 
// Driven Program
int main()
{
    // Given array
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+5];
        for(int i=0;i<n;i++) cin>>a[i];
        cout << find_X(a, n);
        cout<<endl;
    }

}
 