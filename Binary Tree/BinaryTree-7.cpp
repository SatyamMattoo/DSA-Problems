// Two identical trees

#include <iostream>
using namespace std;

class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int d)
    {
        this->val = d;
        this->left = NULL;
        this->right = NULL;
    }
};

bool isSameTree(TreeNode *p, TreeNode *q)
{
    if (p == NULL && q == NULL)
        return true;

    if (p == NULL && q != NULL)
        return false;

    if (q == NULL && p != NULL)
        return false;

    bool right = isSameTree(p->right, q->right);
    bool left = isSameTree(p->left, q->left);

    bool diff = p->val == q->val;

    if (diff && right && left)
        return true;

    else
        return false;
}