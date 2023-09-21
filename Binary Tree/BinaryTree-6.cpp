// Diameter of Binary Tree

#include <iostream>
using namespace std;

class TreeNode
{
public:
    int data;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

// Approach 1
int maxDepth(TreeNode *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int left = maxDepth(root->left);
    int right = maxDepth(root->right);

    int height = max(left, right) + 1;

    return height;
};

int diameterOfBinaryTree(TreeNode *root)
{
    if (root == NULL)
        return 0;

    int first = diameterOfBinaryTree(root->left);
    int second = diameterOfBinaryTree(root->right);
    int third = maxDepth(root->right) + maxDepth(root->left);

    int ans = max(max(first, second), third);
    return ans;
};

// Approach 2

pair<int, int> diameterFast(TreeNode *root)
{
    if (root == NULL)
        return {0, 0};

    pair<int, int> left = diameterFast(root->left);
    pair<int, int> right = diameterFast(root->right);

    int first = left.first;
    int second = right.first;
    int third = left.second + right.second + 1;

    pair<int, int> ans;
    ans.first = max(max(first, second), third);
    ans.second = max(left.second, right.second);

    return ans;
};
