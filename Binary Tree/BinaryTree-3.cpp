// Height of a binary tree

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
