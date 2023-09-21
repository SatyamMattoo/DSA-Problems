// Check for a balanced tree

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

class Solution
{
public:
    // Approach-1
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
    }

    bool isBalanced(TreeNode *root)
    {
        if (root == NULL)
        {
            return true;
        }

        int left = maxDepth(root->left);
        int right = maxDepth(root->right);

        bool l = isBalanced(root->left);
        bool r = isBalanced(root->right);

        bool diff = abs(left - right) <= 1;

        return diff && l && r;
    }

    // Approach-2
    pair<bool, int> balancedFast(TreeNode *root)
    {
        if (root == NULL)
        {
            pair<bool, int> p = make_pair(true, 0);
            return p;
        }
        pair<bool, int> left = balancedFast(root->left);
        pair<bool, int> right = balancedFast(root->right);

        bool leftAns = left.first;
        bool rightAns = right.first;

        bool diff = abs(right.second - left.second) <= 1;

        pair<bool, int> ans;
        ans.second = max(left.second, right.second) + 1;

        if (diff && rightAns && leftAns)
        {
            ans.first = true;
        }
        else
        {
            ans.first = false;
        }
        return ans;
    }

    bool isBalanced2(TreeNode *root)
    {
        return balancedFast(root).first;
    }
};