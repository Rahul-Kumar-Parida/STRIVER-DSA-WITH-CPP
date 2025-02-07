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

int main()
{
    Node *DoublyNode = new Node(10);
    Node *head = DoublyNode;

    Print(head);
    insertAtHead(head, 23);
    Print(head);

    Print(head);
    return 0;
}