#include <bits/stdc++.h>
using namespace std;
const int N = 5;
 
// Function to check whether there
// exists a Hamiltonian Path or not
bool Hamiltonian_path(
    vector<vector<int> >& adj, int N)
{
    int dp[N][(1 << N)];
 
    // Initialize the table
    memset(dp, 0, sizeof dp);
 
    // Set all dp[i][(1 << i)] to
    // true
    for (int i = 0; i < N; i++)
        dp[i][(1 << i)] = true;
 
    // Iterate over each subset
    // of nodes
    for (int i = 0; i < (1 << N); i++) {
 
        for (int j = 0; j < N; j++) {
 
            // If the jth nodes is included
            // in the current subset
            if (i & (1 << j)) {
 
                // Find K, neighbour of j
                // also present in the
                // current subset
                for (int k = 0; k < N; k++) {
 
                    if (i & (1 << k)
                        && adj[k][j]
                        && j != k
                        && dp[k][i ^ (1 << j)]) {
 
                        // Update dp[j][i]
                        // to true
                        dp[j][i] = true;
                        break;
                    }
                }
            }
        }
    }
 
    // Traverse the vertices
    for (int i = 0; i < N; i++) {
 
        // Hamiltonian Path exists
        if (dp[i][(1 << N) - 1])
            return true;
    }
 
    // Otherwise, return false
    return false;
}
 
// Driver Code
int main()
{
 
    // Input
    int v,e;
    vector<vector<int>> adj[105][105];
    int x,y;
    memset(adj,0,sizeof(adj));
    cin>>v>>e;
    for(int i=1;i<=v;i++)
    {
        for(int i=1;i<=v;i++)
        {
            cin>>x>>y;
            adj[x][y]=1;
            adj[y][x]=1;
        }
    }
    int N = adj.size();
 
    // Function Call
    if (Hamiltonian_path(adj, N))
        cout << "YES";
    else
        cout << "NO";
 
    return 0;
}