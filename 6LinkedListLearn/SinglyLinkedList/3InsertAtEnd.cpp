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
// 😍Insert At Begin
void insertAtBegin(node *&head, int d)
{
    // New Node Create
    node *temp = new node(d);
    temp->next = head;
    head = temp;
}

// 😍Insert At End
void insertAtEnd(node *&tail, int d)
{
    // New Node Create
    node *temp = new node(d);
    tail->next = temp;
    tail = temp;
}

// 😍Print Linked List
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
    node *tail = nodeName;
    print(head);
    insertAtEnd(tail, 15);
    print(head);
    insertAtEnd(tail, 20);
    print(head);
    insertAtEnd(tail, 30);
    print(head);
    return 0;
}
