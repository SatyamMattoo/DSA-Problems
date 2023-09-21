// Min Depth of Binary Tree

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

int minDepth(TreeNode *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int left = minDepth(root->left);
    int right = minDepth(root->right);

    // Handle the case where one of the subtrees is empty.
    if (left == 0 || right == 0)
    {
        return 1 + max(left, right);
    }
    return 1 + min(left, right);
}
