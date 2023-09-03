// Singly linked list
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

void insertAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

void insertAtPosition(Node *&tail, Node *&head, int position, int data)
{
    if (position == 1)
    {
        insertAtHead(head, data);
        return;
    }

    Node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }
    if (temp->next == NULL)
    {
        insertAtTail(tail, data);
        return;
    }

    Node *toInsert = new Node(data);
    toInsert->next = temp->next;
    temp->next = toInsert;
}

void deleteNode(int position, Node *&head)
{

    // deleting from first position
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        // memory free from start node
        temp->next = NULL;
        delete temp;
    }

    // deleting from middle or the last position
    Node *curr = head;
    Node *prev = NULL;

    int cnt = 1;
    while (cnt < position)
    {
        prev = curr;
        curr = curr->next;
        cnt++;
    }

    prev->next = curr->next;
    curr->next = NULL;
    delete curr;
}

void print(Node *&head)
{
    Node *temp = head;
    if (head == NULL)
    {
        cout << "The LL is empty" << endl;
        return;
    }
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{

    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;

    insertAtHead(head, 11);
    insertAtHead(head, 13);
    insertAtHead(head, 14);
    print(head);

    insertAtTail(tail, 22);
    print(head);

    insertAtPosition(tail, head, 4, 62);
    print(head);

    deleteNode(4, head);
    print(head);

    return 0;
}