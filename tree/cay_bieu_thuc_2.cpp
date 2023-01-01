#include <bits/stdc++.h>
using namespace std;
struct node
{
    string s;
    node *left;
    node *right;
    node(string i)
    {
        s = i;
        left = right = NULL;
    }
};
vector<string> vv;
int n;
int toNum(string s)
{
    int res = 0;
    for (int i = 0; i < s.size() ; i++)
    {
        res *= 10;
        res += (s[i] - '0');
    }
    return res;
}
node *buildTree(node* root,vector<string> vv, int i)
{
    if(i>=vv.size()) return NULL;
    root = new node (vv[i]);
    root->left=buildTree(root->left, vv, i*2+1);
    root->right=buildTree(root->right,vv,i*2+2);
    return root;
}
// void in(node *root)
// {
//     if(root==NULL) return;
//     in(root->left);
//     cout<<root->s<<" ";
//     in(root->right);
// }
int cal(node *root)
{
    if (root->s != "+" && root->s != "-" && root->s != "*" && root->s != "/")
        return toNum(root->s);
    if (root->s == "*")
        return cal(root->left) * cal(root->right);
    else if (root->s == "/")
        return cal(root->left) / cal(root->right);
    else if (root->s == "+")
        return cal(root->left) + cal(root->right);
    else
        return cal(root->left) - cal(root->right);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vv.clear();
        cin >> n;
        string tmp;
        node *root = NULL;
        for (int i = 0; i < n; i++)
        {
            cin >> tmp;
            vv.push_back(tmp);
        }
        root=buildTree(root,vv,0);
        cout<<cal(root);
        cout<<endl;
    }
}