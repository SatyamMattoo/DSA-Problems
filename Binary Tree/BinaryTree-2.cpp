// No of leaf nodes and reverse level order traversal

#include <iostream>
#include <queue>
#include <stack>
using namespace std;

class node
{
public:
    int data; 
    node *left;
    node *right;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node *buildTree(node *&root)
{

    cout << "Enter the data" << endl;
    int data;
    cin >> data;

    root = new node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter data for left node" << endl;
    root->left = buildTree(root->left);

    cout << "Enter data for right node" << endl;
    root->right = buildTree(root->right);

    return root;
};

void reverseLevelOrder(node *root)
{
    stack<node *> s;
    queue<node *> q;

    if (root == NULL)
    {
        return;
    }

    q.push(root);
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        s.push(temp);

        if (temp->left)
            q.push(temp->left);
        if (temp->right)
            q.push(temp->right);
    }

    while (!s.empty())
    {
        node *temp = s.top();
        cout << temp->data << " ";
        s.pop();
    }
};

int noOfLeafNodes(node *root, int &cnt)
{
    if (root == NULL)
    {
        return cnt;
    }

    noOfLeafNodes(root->left, cnt);

    if (root->right == NULL && root->left == NULL)
    {
        cnt++;
    }

    noOfLeafNodes(root->right, cnt);
}

int main()
{
    node *root = NULL;
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    buildTree(root);

    int cnt = 0;
    cnt = noOfLeafNodes(root, cnt);
    cout << "The number of leaf nodes is" << cnt << endl;

    cout << "the reverse Level Order Traversal of the tree is " << endl;
    reverseLevelOrder(root);

    return 0;
}
