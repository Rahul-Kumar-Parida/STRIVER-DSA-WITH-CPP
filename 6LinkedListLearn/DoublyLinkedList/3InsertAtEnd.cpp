#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *prev;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};
// 🍀 Print Node In doubly LinkedList
void Print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
}
void insertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

int main()
{
    Node *DoublyNode = new Node(10);
    Node *head = DoublyNode;
    Node *tail = DoublyNode;
    Print(head);
    insertAtHead(head, 23);
    Print(head);
    insertAtTail(tail, 45);
    Print(head);
    insertAtTail(tail, 32);
    Print(head);
    insertAtTail(tail, 66);
    Print(head);
    return 0;
}