// ** level order traversal in binary tree.

#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int data;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int val)
    {
        data = val;
        left = right = NULL;
    }
};

vector<vector<int>> levelorder(TreeNode *root)
{
    vector<vector<int>> ans;
    if (root == NULL)
    {
        return ans;
    }
    queue<TreeNode *> q;
    q.push(root);

    while (!q.empty())
    {

        int levelsize = q.size();
        vector<int> levelnodes;
        for (int i = 0; i < levelsize; i++)
        {
            TreeNode *temp = q.front();
            q.pop();

            levelnodes.push_back(temp->data);

            if (temp->left != NULL)
            {
                q.push(temp->left);
            }
            if (temp->right != NULL)
            {
                q.push(temp->right);
            }
        }
        ans.push_back(levelnodes);
    }
    return ans;
}

int main()
{
    struct TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    vector<vector<int>> a = levelorder(root);

    for (const auto &level : a)
    {
        for (int node : level)
        {
            cout << node << " ";
        }
        cout << endl;
    }
    return 0;
}