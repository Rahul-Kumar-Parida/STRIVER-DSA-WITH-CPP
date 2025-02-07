#include <iostream>
using namespace std;

// 🍀Create A Linked List..
struct Node
{
    int data;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

// 🍀Insert At Head Implement
void insertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}
void insertAtEnd(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}
void Print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *nodeName = new Node(10);
    Node *head = nodeName;
    Node *tail = nodeName;
    // cout << head << endl;
    // cout << nodeName << endl;
    // cout << head->data << endl;
    // cout << nodeName->data << endl;
    // cout << nodeName->next << endl;
    Print(head);
    insertAtHead(head, 13);
    insertAtHead(head, 23);
    insertAtHead(head, 34);
    insertAtHead(head, 4434);
    Print(head);
    insertAtEnd(tail, 45);
    insertAtEnd(tail, 90);
    insertAtEnd(tail, 33);
    insertAtEnd(tail, 3344);
    Print(head);

    return 0;
}