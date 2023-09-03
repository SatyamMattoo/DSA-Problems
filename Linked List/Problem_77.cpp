// Circular linkded list
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    // destructor
    ~Node()
    {
        int value = this->data;

        // free memory
        while (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Memory has been cleared for node with value " << value << endl;
    }
};

void print(Node *tail)
{
    Node *temp = tail;

    if (tail == NULL)
    {
        cout << " the list is empty " << endl;
        return;
    }

    do
    {
        cout << tail->data << " ";
        tail = tail->next;

    } while (tail != temp);
    cout << endl;
}

void insert(Node *&tail, int data, int element)
{
    if (tail == NULL)
    {
        Node *temp = new Node(data);
        temp->next = temp;
        tail = temp;
        return;
    }

    Node *curr = tail;
    while (element != curr->data)
    {
        curr = curr->next;
    }

    Node *temp = new Node(data);
    temp->next = curr->next;
    curr->next = temp;
}

void deleteNode(Node *&tail, int position)
{
    int count = 1;
    Node *prev = tail;
    Node *curr = tail->next;

    while (count < position - 1)
    {
        prev = curr;
        curr = curr->next;
        count++;
    }

    prev->next = curr->next;

    // one node
    if (curr == prev)
    {
        tail = NULL;
    }
    // two nodes
    //  else if(tail==curr)
    //  {
    //      tail=prev;
    //  }
    curr->next = NULL;
    delete curr;
}

int main()
{
    Node *tail = NULL;
    insert(tail, 1, 1);
    print(tail);
    insert(tail, 2, 1);
    print(tail);
    deleteNode(tail, 2);
    insert(tail, 3, 1);
    print(tail);
    insert(tail, 4, 3);
    insert(tail, 10, 1);
    print(tail);
    deleteNode(tail, 2);
    print(tail);
    deleteNode(tail, 2);
    print(tail);
}