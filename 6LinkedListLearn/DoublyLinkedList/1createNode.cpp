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
// Length Of Doubly Linked List

int getLength(Node *head)
{
    int len = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }

    return len;
}

int main()
{
    Node *DoublyNode = new Node(10);
    Node *head = DoublyNode;
    Print(head);
    cout << "Length is: " << getLength << endl;

    return 0;
}