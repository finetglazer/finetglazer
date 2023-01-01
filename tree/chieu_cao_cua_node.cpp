#include <bits/stdc++.h>
using namespace std;
struct node
{
    int val;
    node *left;
    node *right;
    node(int i)
    {
        val = i;
        left = right = NULL;
    }
};
vector<int> ans;
void makeNode(node *root, int x, int y, char c)
{
    if (c == 'L')
        root->left = new node(y);
    else
        root->right = new node(y);
}
void insertNode(node *root, int x, int y, char c)
{
    if (root == NULL)
        return;
    if (root->val == x)
        makeNode(root, x, y, c);
    else
    {
        insertNode(root->left, x, y, c);
        insertNode(root->right, x, y, c);
    }
}
void hofnode(node *root,int tmp)
{
    if(root==NULL) return;
    ans.push_back(tmp);
    hofnode(root->left,tmp+1);
    hofnode(root->right,tmp+1);
}
int main()
{
    int n;
    cin >> n;
    node *root = NULL;
    int x, y;
    char c;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y >> c;
        if (root == NULL)
        {
            root = new node(x);
            makeNode(root, x, y, c);
        }
        else
            insertNode(root, x, y, c);
    }
    hofnode(root,0);
    sort(ans.begin(),ans.end());
    for(auto x: ans) 
    {
        cout<<x<<" ";
    }
}