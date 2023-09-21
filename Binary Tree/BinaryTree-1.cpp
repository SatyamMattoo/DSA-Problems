#include <iostream>
#include <queue>
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

node *buildTree(node *root)
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

void levelTraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!(q.empty()))
    {
        node *temp = q.front();
        q.pop();
        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

void inOrder(node *root) // LNR
{
    if (root == NULL)
    {
        return;
    }

    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

void preOrder(node *root) // NLR
{
    if (root == NULL)
    {
        return;
    }

    preOrder(root->left);
    cout << root->data << " ";
    preOrder(root->right);
}

void postOrder(node *root) // LRN
{
    if (root == NULL)
    {
        return;
    }

    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

void buildLevelTree(node *&root)
{
    queue<node *> q;

    int data;
    cout << "Enter the root data" << endl;
    cin >> data;

    root = new node(data);

    q.push(root);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        cout << "Enter the data for the left side of node" << temp->data << endl;
        int leftData;
        cin >> leftData;
        if (leftData != -1)
        {
            temp->left = new node(leftData);
            q.push(temp->left);
        }
        cout << "Enter the data for the right side of node " << temp->data << endl;
        int rightData;
        cin >> rightData;
        if (rightData != -1)
        {
            temp->right = new node(rightData);
            q.push(temp->right);
        }
    }
}

int main()
{

    node *root = NULL;
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    // root = buildTree(root);

    buildLevelTree(root);
    // 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1
    levelTraversal(root);

    // inOrder(root);
    // preOrder(root);
    // postOrder(root);
    return 0;
}