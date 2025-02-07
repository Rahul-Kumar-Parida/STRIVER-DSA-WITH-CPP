#include <iostream>
using namespace std;

// create a Linked List Implementation.
struct node
{
    int data;
    node *next;

    // constructor
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtBegin(node *&head, int d)
{
    // New Node Create
    node *temp = new node(d);
    temp->next = head;
    head = temp;
}

void print(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    // create a new node
    node *nodeName = new node(10);
    // cout << nodeName->data << endl;
    // cout << nodeName->next << endl;

    // head pointer to nodeName
    node *head = nodeName;
    print(head);
    insertAtBegin(head, 15);
    print(head);
    insertAtBegin(head, 20);
    print(head);
    insertAtBegin(head, 30);
    print(head);
    return 0;
}
