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

void insertAtHead(Node *&head, Node *&tail, int d)
{
    if (head == NULL)
    {
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}
void insertAtTail(Node *&head, Node *&tail, int d)
{
    if (head == NULL)
    {
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}
void insertAtAnyPosition(Node *&tail, Node *&head, int position, int d)
{
    // 🍀 insert at first position
    if (position == 1)
    {
        insertAtHead(head, tail, d);
        return;
    }

    Node *temp = head;
    int count = 1;
    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }
    // 🍀 insert at last position
    if (temp->next == NULL)
    {
        insertAtTail(head, tail, d);
        return;
    }

    // 🍀  creating a node for d
    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    Print(head);
    insertAtHead(head, tail, 23);
    Print(head);
    insertAtTail(head, tail, 45);
    Print(head);
    insertAtTail(head, tail, 32);
    Print(head);
    insertAtTail(head, tail, 66);
    Print(head);
    insertAtAnyPosition(tail, head, 3, 344);
    Print(head);
    insertAtAnyPosition(tail, head, 2, 144);
    Print(head);
    insertAtAnyPosition(tail, head, 7, 15);
    Print(head);
    return 0;
}